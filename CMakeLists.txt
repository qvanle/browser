set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#[[ minimum version of cmake required to build the project ]]
cmake_minimum_required(VERSION 3.18.4)

#[[ name of the project ]]
project(CLM) 

#[[ SOURCE is the variable that contains the list of all the source files ]]
aux_source_directory(src/ SOURCE) 


#[[ add_executable is the command to create the executable from the source files ]]
add_executable(${PROJECT_NAME} ${SOURCE})

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
pkg_check_modules(WEBKIT2 REQUIRED webkit2gtk-4.0)

include_directories(${PROJECT_NAME} ${GTK3_INCLUDE_DIRS})
include_directories(${PROJECT_NAME} ${WEBKIT2_INCLUDE_DIRS})


target_include_directories(${PROJECT_NAME} PUBLIC include/)
target_link_libraries(${PROJECT_NAME} ${GTK3_LIBRARIES} ${WEBKIT2_LIBRARIES})
