all: Program
Program: Funciones Main
	gcc -o  Main.o FuncionesCC.o
funciones: FuncionesCC.c FuncionesCC.h
	gcc -c FuncionesCC.c
Main: Main.c FuncionesCC.h
	gcc -c Main.c
