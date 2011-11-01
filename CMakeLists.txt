cmake_minimum_required (VERSION 2.6)
# The version number.
project (Ice)

set (Ice_VERSION_MAJOR 1)
set (Ice_VERSION_MINOR 0)

set(CMAKE_ALLOW_LOOSE_LOOP_CONSTRUCTS true)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/IceConfig.h.in"
  "${PROJECT_BINARY_DIR}/src/IceConfig.h"
  )

Find_Package ( SDL REQUIRED )
if ( NOT SDL_FOUND )
message ( FATAL_ERROR "SDL not found!" )
endif ( NOT SDL_FOUND )

find_package(OpenGL)

link_libraries (
${SDL_LIBRARY}
${GLUT_LIBRARY}
${OPENGL_LIBRARY}
)


# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
FILE(GLOB ALL_CPP_SRCS src/*.cpp)
FILE(GLOB ALL_H_SRCS src/*.h)
FILE(GLOB ALL_D_SRCS src/*.d)

add_executable(Ice MACOSX_BUNDLE ${ALL_CPP_SRCS} ${ALL_H_SRCS} ${ALL_D_SRCS} ${ALL_M_SRCS})
