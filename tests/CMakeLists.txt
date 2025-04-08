add_executable(math_lib_tests math_lib_tests.cpp)

target_link_libraries(math_lib_tests PRIVATE math_lib gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(math_lib_tests)