file(GLOB SRCS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
file(GLOB HEADERS "${CMAKE_SOURCE_DIR}/include/*.hpp")

add_library(sparrow STATIC ${SRCS})

target_include_directories(sparrow
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_BINARY_DIR}/include>
  PRIVATE
    ${CMAKE_SOURCE_DIR}/src
)

target_compile_options(sparrow
  PRIVATE
    -Wall
)

target_compile_features(sparrow
  PRIVATE
    cxx_std_14
	)

install(TARGETS sparrow
  ARCHIVE DESTINATION ${CMAKE_BINARY_DIR}/lib
  LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/lib
)


install(FILES ${HEADERS} DESTINATION ${CMAKE_BINARY_DIR}/include)
