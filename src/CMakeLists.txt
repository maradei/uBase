message(STATUS "Construindo programa")

set(target uBase)

set(sources
	uBase.c
)

add_executable(${target} ${sources})
target_link_libraries(${target})
