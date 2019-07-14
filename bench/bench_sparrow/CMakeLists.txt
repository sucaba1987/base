file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(bench_sparrow ${SRCS})

TARGET_LINK_LIBRARIES(bench_sparrow
    sparrow
    libgbench
)

install(TARGETS bench_sparrow DESTINATION ${CMAKE_BINARY_DIR}/bench)
