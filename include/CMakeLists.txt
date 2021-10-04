# Make an interface
add_library(stack INTERFACE)

# We need this directory, and users of our library will need it too
target_include_directories(stack INTERFACE .)

# All users of this library will need at least C++11
target_compile_features(stack INTERFACE cxx_std_11)