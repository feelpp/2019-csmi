cmake_minimum_required(VERSION 3.10)

# set the project name
project(toto VERSION 1.0.0)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

# add the executable
add_executable(toto toto.cpp)
target_link_libraries (toto Eigen3::Eigen)

find_package (Python COMPONENTS Interpreter Development)
install(TARGETS toto )

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()

# Packaging support
set(CPACK_PACKAGE_VENDOR "CSMI")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "the csmi project 2019")
set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENCE")
set(CPACK_RESOURCE_FILE_README "${CMAKE_CURRENT_SOURCE_DIR}/README.adoc")
set(CPACK_SOURCE_GENERATOR "TGZ;ZIP")
set(CPACK_SOURCE_IGNORE_FILES
    /.git
    /dist
    /.*build.*
    /\\\\.DS_Store
)
include(CPack)
