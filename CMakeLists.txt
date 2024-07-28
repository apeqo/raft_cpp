cmake_minimum_required(VERSION 3.22)
project(KVRaftCpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE "Debug")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

find_package(glog 0.7.1 REQUIRED)
find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)



include_directories(${PROJECT_SOURCE_DIR}/src/common/include)
include_directories(${PROJECT_SOURCE_DIR}/src/rpc/include)
include_directories(${PROJECT_SOURCE_DIR}/example)
include_directories(${PROJECT_SOURCE_DIR}/src/raftCore/include)
include_directories(${PROJECT_SOURCE_DIR}/src/raftRpcPro/include)
include_directories(${PROJECT_SOURCE_DIR}/src/raftClerk/include)
include_directories(${PROJECT_SOURCE_DIR}/src/skipList/include)

link_directories(${PROJECT_SOURCE_DIR}/lib)

add_executable(raftCoreRun raftKvDB.cpp)
target_link_libraries(raftCoreRun skip_list_on_raft rpc_lib protobuf pthread glog::glog gRPC::grpc++)
add_subdirectory(src)

add_library(skip_list_on_raft STATIC  ${src_rpc} ${src_fiber} ${rpc_example} ${raftsource} ${src_raftCore} ${src_raftRpcPro})
target_link_libraries(skip_list_on_raft pthread dl)

add_custom_target(format
        COMMAND bash ${PROJECT_SOURCE_DIR}/format.sh
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        COMMAND echo "format done!"
)