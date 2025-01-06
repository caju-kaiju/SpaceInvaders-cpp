set -ex

mkdir -p ./build/

cmake -S . -B ./build -DCMAKE_BUILD_TYPE=Release
cd build/
make
cd ..
