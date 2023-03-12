set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES} Robot.cpp Policia.cpp Robocop.cpp Armadura.cpp Guerrero.cpp Humanoide.cpp HumanoideManager.cpp Alien.cpp Predator.cpp)