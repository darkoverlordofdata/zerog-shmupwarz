#!/usr/bin/env bash

## build vala
cd ./vala

emvalac --builddir build \
    --cc=jni \
    --define PROFILING \
    --vapidir src/vapis \
    --pkg sdl2 \
    --pkg SDL2_image \
    -X -O2 \
    build/src/Sprite.vala \
    build/src/main.vala


## copy ir output to jni folder
cp -f ./build/src/Sprite.c ../jni/src
cp -f ./build/src/main.c ../jni/src

cd ../jni

## build jni code
ndk-build

cd ..

## build the apk
ant debug install

