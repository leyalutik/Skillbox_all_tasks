rm -r -f build
mkdir build
cd build
cmake -G "Unix Makefiles" -S .. -B . 
cd build
make
