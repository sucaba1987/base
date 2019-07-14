find_package(Threads REQUIRED)

include(ExternalProject)

list(APPEND DISABLE_ARGS
  "-DBENCHMARK_ENABLE_GTEST_TESTS=OFF"
  "-DBENCHMARK_ENABLE_TESTING=OFF"
)

# Download and install GoogleBenchmark
ExternalProject_Add(gbench
  GIT_REPOSITORY    https://github.com/google/benchmark.git
  GIT_TAG           master
  CMAKE_ARGS        "${DISABLE_ARGS}"
  INSTALL_COMMAND   ""
)

ExternalProject_Get_Property(gbench source_dir binary_dir)

add_library(libgbench IMPORTED STATIC GLOBAL)
add_dependencies(libgbench gtest gbench)

set_target_properties(libgbench PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/src/libbenchmark.a"
    "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
)

include_directories("${source_dir}/include")

add_subdirectory(bench_sparrow)
