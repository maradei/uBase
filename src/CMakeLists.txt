message(STATUS "Construindo programa")

set(target uBase)

set(sources
	main.c
	help.c
	interpretar.c
	criar.c
	ordenar.c
	compactar.c
)

add_executable(${target} ${sources})
target_link_libraries(${target})
