


# 搜索当前目录下所有文件
file(GLOB_RECURSE SRCS "*.cc" "*.cpp" "*.c" "*.h" "*.hpp")

# 生成库文件
add_executable(excel2pb ${SRCS})
set(CMAKE_CXX_CLANG_TIDY "")
#指定库输出路径
SET(EXECUTABLE_OUTPUT_PATH ${BINARIES})

ADD_DEPENDENCIES(excel2pb basecode)
# 指定额外的链接库
TARGET_LINK_LIBRARIES(excel2pb
 xlnt
 protobuf
 libfmt.a
 basecode
 dl
 pthread
)



