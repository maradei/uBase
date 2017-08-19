message(STATUS "Construindo programa")

set(target uBase)

set(sources
	main.c
	help.c
	interpretar.c
	criar.c
	remover.c
	ordenar.c
	compactar.c
	descompactar.c
	bibliotecaRemover.c
	bibliotecaAlocacao.c
	bibliotecaStrings.c
	bibliotecaOperacoes.c
	bibliotecaCompactacao.c
	bibliotecaDescompactacao.c
<<<<<<< HEAD
	huffman.c
=======
	bibliotecaCriar.c
<<<<<<< HEAD
>>>>>>> upstream/master
=======
	susbtituicao.c
	selecaonatural.c
>>>>>>> upstream/master
)

add_executable(${target} ${sources})
target_link_libraries(${target})
