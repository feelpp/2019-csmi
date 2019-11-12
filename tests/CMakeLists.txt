add_executable( test_toto test_toto.cpp )
add_test(NAME test_toto COMMAND test_toto )
message(STATUS "${CMAKE_CURRENT_SOURCE_DIR}/test_py")
add_test(NAME test_py COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/test_py )
