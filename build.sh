#! /bin/bash

# 64 bit builds
# if [ ! -d build/linux64 ]; then
# 	cmake -H. -Bbuild/linux64 -G Ninja -DCMAKE_BUILD_TYPE=Debug
# 	# compile with: ninja -C build/win32
# fi
# 
# if [ ! -d build/osx ]; then
#   cmake -H. -Bbuild/osx -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=cmake/x86_64-osx.cmake
# fi
# 
# if [ ! -d build/win64 ]; then
#   cmake -H. -Bbuild/win64 -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=cmake/x86_64-w64-mingw32.cmake
# fi


# 32 bit builds
if [ ! -d build/linux32 ]; then
	CFLAGS=-m32 CXXFLAGS=-m32 cmake -H. -Bbuild/linux32 -G Ninja -DCMAKE_BUILD_TYPE=cmake/i686-pc-linux-gnu.cmake
	# compile with: ninja -C build/linux32
fi

if [ ! -d build/win32 ]; then
	cmake -v -H. -Bbuild/win32 -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=cmake/i686-w64-mingw32.cmake
	# compile with: ninja -C build/win32
fi
