#!/bin/bash

module_append() {
    case ":${MODULEPATH}:" in
    *:${1}:*)
        return 1;;
    *)
        export MODULEPATH="${MODULEPATH}:${1}";;
    esac
}

module_append "${1}/modules"
export MODIMAGE_PATH="${1}/images"

echo "Installing Anaconda..."
pushd /tmp
rm Anaconda2-2.5.0-Linux-x86_64.sh Anaconda3-2.5.0-Linux-x86_64.sh 2> /dev/null
wget http://repo.continuum.io/archive/Anaconda2-2.5.0-Linux-x86_64.sh
chmod +x Anaconda2-2.5.0-Linux-x86_64.sh
wget http://repo.continuum.io/archive/Anaconda3-2.5.0-Linux-x86_64.sh
chmod +x Anaconda3-2.5.0-Linux-x86_64.sh
rm -r "${1}/images/anaconda"
./Anaconda2-2.5.0-Linux-x86_64.sh -bp "${1}/images/anaconda/2"
"${1}/images/anaconda/2/bin/conda" update -y conda
"${1}/images/anaconda/2/bin/conda" update -y anaconda
"${1}/images/anaconda/2/bin/conda" update -yc https://conda.binstar.org/r --all
"${1}/images/anaconda/2/bin/conda" install -yc https://conda.binstar.org/r r-base r-irkernel
./Anaconda3-2.5.0-Linux-x86_64.sh -bp "${1}/images/anaconda/3"
"${1}/images/anaconda/3/bin/conda" update -y conda
"${1}/images/anaconda/3/bin/conda" update -y anaconda
"${1}/images/anaconda/3/bin/conda" update -yc https://conda.binstar.org/r --all
"${1}/images/anaconda/3/bin/conda" install -yc https://conda.binstar.org/r r-base r-irkernel
popd
