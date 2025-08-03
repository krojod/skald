cmake_minimum_required(VERSION 3.0)

project(skald VERSION 0.1 LANGUAGES CXX)

file(GLOB AUDIO_PLAYER "src/AudioPlayer/*")
add_library(AudioPlayer STATIC ${AUDIO_PLAYER})
target_link_libraries(AudioPlayer)

add_executable(skald "src/main.cpp")
target_link_libraries(skald AudioPlayer)