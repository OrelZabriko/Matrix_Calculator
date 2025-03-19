file (GLOB_RECURSE MY_SOURCE_FILES CONFIGURE_DEPENDS LIST_DIRECTORIES false RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)
target_sources (${CMAKE_PROJECT_NAME} PRIVATE ${MY_SOURCE_FILES} "MatrixCalculator.cpp" "../include/matrixCalculator.h" "../include/Matrix.h" "Matrix.cpp" "../include/Operations.h" "Operations.cpp")
