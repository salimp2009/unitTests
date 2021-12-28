project(mathLib)

add_library(
	sumLibrary 
	src/LibraryCode.cpp 
	src/LibraryCode.cpp
)

target_include_directories(sumLibrary PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")


