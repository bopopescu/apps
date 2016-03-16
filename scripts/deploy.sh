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

module load localbin
