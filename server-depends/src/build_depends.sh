set -e

base()
{
mkdir -p ../lib
mkdir -p ../bin

#sudo autoreconf -ivf 
find -name "*.sh" -type f -exec chmod +x {} \;
}



jemalloc()
{
cd jemalloc
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g"  ./autogen.sh  --with-jemalloc-prefix --with-mangling --enable-stats --enable-prof
make -j4
cp lib/lib* ../../lib/ -rp
cd ..
}

protobuf()
{
cd protobuf/
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CXXFLAGS="-fPIC -g" cmake ../cmake -Dprotobuf_BUILD_TESTS=OFF -Dprotobuf_BUILD_EXAMPLES=OFF -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp protoc ../../../bin/ -rp
cp protoc-* ../../../bin/ -rp
cp *.a ../../../lib/ -rp
cd ../../
}

cpp_redis()
{
cd cpp_redis
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp lib/libcpp_redis.a ../../../lib/ -rp
cp lib/libtacopie.a ../../../lib/ -rp
cd ../..
}

gflags()
{
cd gflags
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO -DBUILD_SHARED_LIBS=1 -DBUILD_STATIC_LIBS=1 -DCMAKE_BUILD_RPATH=FALSE -DCMAKE_SKIP_INSTALL_RPATH=FALSE -DCMAKE_BUILD_WITH_INSTALL_RPATH=TRUE -DCMAKE_INSTALL_RPATH="." -DCMAKE_INSTALL_RPATH_USE_LINK_PATH=FALSE
make -j4
cp lib/* ../../../lib/ -rp
cp include .. -rp
cd ../..
}

snappy()
{
cd snappy
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO -DBUILD_SHARED_LIBS=OFF -DSNAPPY_BUILD_TESTS=OFF -DCMAKE_CXX_FLAGS="-fPIC -g"
make -j4
cp libsnappy.* ../../../lib/ -rp
cp snappy-stubs-public.h ..
cd ../..
}

leveldb()
{
cd leveldb
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_INCLUDE_PATH="../snappy/" -DCMAKE_LIBRARY_PATH="../../lib/" -DBUILD_SHARED_LIBS=ON -DCMAKE_BUILD_TYPE=RELWITHDEBINFO -DLEVELDB_BUILD_TESTS=OFF -DLEVELDB_BUILD_BENCHMARKS=OFF -DLEVELDB_INSTALL=OFF -DCMAKE_BUILD_RPATH=FALSE -DCMAKE_SKIP_INSTALL_RPATH=FALSE -DCMAKE_BUILD_WITH_INSTALL_RPATH=TRUE -DCMAKE_INSTALL_RPATH="." -DCMAKE_INSTALL_RPATH_USE_LINK_PATH=FALSE -DHAVE_SNAPPY=ON
make -j4
CC=gcc-7 CXX=g++-7 CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_INCLUDE_PATH="../snappy/" -DCMAKE_LIBRARY_PATH="../../lib/" -DBUILD_SHARED_LIBS=OFF -DCMAKE_BUILD_TYPE=RELWITHDEBINFO -DLEVELDB_BUILD_TESTS=OFF -DLEVELDB_BUILD_BENCHMARKS=OFF -DLEVELDB_INSTALL=OFF -DCMAKE_BUILD_RPATH=FALSE -DCMAKE_SKIP_INSTALL_RPATH=FALSE -DCMAKE_BUILD_WITH_INSTALL_RPATH=TRUE -DCMAKE_INSTALL_RPATH="." -DCMAKE_INSTALL_RPATH_USE_LINK_PATH=FALSE -DHAVE_SNAPPY=ON
make -j4
cp include .. -rp
cp libleveldb.* ../../../lib/ -rp
cd ../..
}

brpc()
{
cd brpc
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO -DCMAKE_INCLUDE_PATH="../gflags/include;../protobuf/src;../leveldb/include" -DCMAKE_LIBRARY_PATH="../../lib/" -DPROTOBUF_PROTOC_EXECUTABLE="../../../bin/protoc" -DProtobuf_PROTOC_EXECUTABLE="../../../bin/protoc" -DCMAKE_BUILD_RPATH=FALSE -DCMAKE_SKIP_INSTALL_RPATH=FALSE -DCMAKE_BUILD_WITH_INSTALL_RPATH=TRUE -DCMAKE_INSTALL_RPATH="./:./libs:../libs:./depends:../depends" -DCMAKE_INSTALL_RPATH_USE_LINK_PATH=FALSE
make -j4
cp output/include .. -rp
cp output/lib/libbrpc.* ../../../lib/ -rp
cd ../..
}

libevent()
{
cd libevent
sudo autoreconf -ivf 
sudo chmod +x ./configure
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" ./configure
make -j4
cp .libs/*.so* ../../lib/ -rp
cd ..
}

tinyxml2()
{
cd tinyxml2/
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp libtinyxml2.* ../../../lib/ -rp
cd ../..
}

lua()
{
cd lua
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" make linux -j4
cp src/liblua.a ../../lib/
cp src/lua ../../bin/
cp src/luac ../../bin/
cd ..
}

curlpp()
{
cd curlpp
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp libcurlpp.* ../../../lib/ -rp
cd ../..
}

xlnt()
{
cd xlnt
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp source/libxlnt.so* ../../../lib/ -rp
cd ../..
}

fmt()
{
cd fmt
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" CXXFLAGS="-fPIC -g" cmake .. -DFMT_TEST=OFF -DBUILD_SHARED_LIBS=OFF -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp libfmt.a ../../../lib/ -rp
#cp libfmt.so* ../../../lib/ -rp
cd ../..
}

libwebsockets()
{
cd libwebsockets
mkdir -p build
cd build
CC=gcc-7 CXX=g++-7 CFLAGS="-fPIC -g" CXXFLAGS="-fPIC -g" cmake .. -DCMAKE_BUILD_TYPE=RELWITHDEBINFO
make -j4
cp lib/libwebsockets.so* ../../../lib/ -rp
cd ../..
}



$1;
 