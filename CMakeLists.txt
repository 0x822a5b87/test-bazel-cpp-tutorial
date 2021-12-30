	cmake_minimum_required(VERSION 3.10)
    project(CppTutorial)
    set(CMAKE_CXX_STANDARD 11)
    include_directories(".")
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

    add_executable(main stage5/main/hello-world.cc)


    target_link_libraries(main PRIVATE ZLIB::ZLIB)
    target_link_libraries(main PRIVATE absl::any absl::base absl::bits absl::city)
