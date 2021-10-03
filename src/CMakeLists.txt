set(HEADER_LIST "../include/square.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(square square.cpp ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(square PUBLIC ../include/)

# All users of this library will need at least C++11
target_compile_features(square PUBLIC cxx_std_11)