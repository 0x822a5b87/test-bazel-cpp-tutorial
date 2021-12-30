	cmake_minimum_required(VERSION 3.10)
    project(CppTutorial)
    set(CMAKE_CXX_STANDARD 11)
    include_directories("." "stage8")
#    set(HeadFileDirList "")
#    file(GLOB SRCH_LIST stage5/main/*.cc)
#    message("srch_list " ${SRCH_LIST})
#    foreach(src ${SRCH_LIST})
#        #去掉文件名，截取路径
#        string(REGEX REPLACE "[^/\\\\]+$" "" HeadFileDir ${src})
#        message(" file name" ${HeadFileDir})
#        message(STATUS ${HeadFileDir})
#        #包含此路径
#        include_directories(${HeadFileDir})
#    endforeach()

    find_package(ZLIB REQUIRED)
    find_package(absl CONFIG REQUIRED)
    find_package(protobuf CONFIG REQUIRED)
    find_package(gRPC CONFIG REQUIRED)
    find_package(modules CONFIG REQUIRED)

    add_executable(main stage8/src/greeter_client.cc)

    target_link_libraries(main PRIVATE gRPC::gpr gRPC::upb gRPC::grpc gRPC::grpc++)
    target_link_libraries(main PRIVATE re2::re2 c-ares::cares)
    target_link_libraries(main PRIVATE ZLIB::ZLIB)
    target_link_libraries(main PRIVATE absl::any absl::base absl::bits absl::city)
    target_link_libraries(main PRIVATE protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)
