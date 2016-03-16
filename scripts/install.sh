#!/bin/bash

export MODAPP_PATH="$(dirname $(readlink -e "${BASH_SOURCE[0]}"))/../"

module_append() {
    case ":${MODULEPATH}:" in
    *:${1}:*)
        return 1;;
    *)
        export MODULEPATH="${MODULEPATH}:${1}";;
    esac
}

module_append "${MODAPP_PATH}/modules"
export MODIMAGE_PATH="${MODAPP_PATH}/images"

echo "Installing Anaconda..."
pushd /tmp
rm Anaconda2-2.5.0-Linux-x86_64.sh Anaconda3-2.5.0-Linux-x86_64.sh 2> /dev/null
wget http://repo.continuum.io/archive/Anaconda2-2.5.0-Linux-x86_64.sh
chmod +x Anaconda2-2.5.0-Linux-x86_64.sh
wget http://repo.continuum.io/archive/Anaconda3-2.5.0-Linux-x86_64.sh
chmod +x Anaconda3-2.5.0-Linux-x86_64.sh
rm -r "${MODAPP_PATH}/images/anaconda"
./Anaconda2-2.5.0-Linux-x86_64.sh -bp "${MODAPP_PATH}/images/anaconda/2"
"${MODAPP_PATH}/images/anaconda/2/bin/conda" update -y conda
"${MODAPP_PATH}/images/anaconda/2/bin/conda" update -y anaconda
"${MODAPP_PATH}/images/anaconda/2/bin/conda" update -yc https://conda.binstar.org/r --all
"${MODAPP_PATH}/images/anaconda/2/bin/conda" install -yc https://conda.binstar.org/r r-base r-irkernel
./Anaconda3-2.5.0-Linux-x86_64.sh -bp "${MODAPP_PATH}/images/anaconda/3"
"${MODAPP_PATH}/images/anaconda/3/bin/conda" update -y conda
"${MODAPP_PATH}/images/anaconda/3/bin/conda" update -y anaconda
"${MODAPP_PATH}/images/anaconda/3/bin/conda" update -yc https://conda.binstar.org/r --all
"${MODAPP_PATH}/images/anaconda/3/bin/conda" install -yc https://conda.binstar.org/r r-base r-irkernel
popd
