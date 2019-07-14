file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(test_sparrow ${SRCS})

TARGET_LINK_LIBRARIES(test_sparrow
    sparrow
    libgtest
    libgmock
)

add_test(NAME test_sparrow
         COMMAND test_sparrow)
