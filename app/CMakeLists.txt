set(MAIN_SRCS "main.cpp")

add_executable(my_app ${MAIN_SRCS})

target_link_libraries(my_app
  sparrow
)

install(TARGETS my_app DESTINATION ${CMAKE_BINARY_DIR}/bin)
