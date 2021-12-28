project(googleTest)

add_executable(testRunner test.cpp)
target_link_libraries(testRunner sumLibrary gtest_main gmock_main)




