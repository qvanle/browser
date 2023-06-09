set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
#[[ minimum version of cmake required to build the project ]]
cmake_minimum_required(VERSION 3.18.4)



#[[ name of the project ]]
project(CLM) 

#[[ SOURCE is the variable that contains the list of all the source files ]]
aux_source_directory(src/ SOURCE) 


#[[ add_executable is the command to create the executable from the source files ]]
add_executable(${PROJECT_NAME} ${SOURCE})
