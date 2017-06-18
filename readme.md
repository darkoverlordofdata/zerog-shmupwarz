# ShmupWarz II - The Wrath of Duane Dibbley 


vala-entitas running on android, emscripten and linux desktop.


## build

### deskstop:
mkdir install
cd install
cmake .. 
make
cp assets install/src
cd install/src
./shmupwarz

### emscripten
./emscripten.sh

results in ./web

### android
./android.sh

## build requirements
* autovala for desktop
* emscripten and android require emvalac (https://github.com/darkoverlordofdata/emvalac)
* emvalac requires nodejs
* android requires SDL2.0.5, SDL_image and SDL_ttf linked or copied to the jni folder

