#!/bin/bash

export MODAPP_PATH="$(dirname $(readlink -e "${BASH_SOURCE[0]}"))"
pushd "$MODAPP_PATH/../images/${1}"
module load chrpath
find . -exec sh -c "file {} | grep ELF | grep -v '^\./\(jdk\|anaconda\)/' && chmod +w {} && chrpath -d {} && echo {}" \;
module unload chrpath
popd
