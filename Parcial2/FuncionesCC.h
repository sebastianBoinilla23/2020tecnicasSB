
#ifndef FUNCIONESCC_H_
#define FUNCIONESCC_H_
#include<stdlib.h>
#include<stdio.h>

//Local 
typedef struct Local{
	char nombreLocal[20];
	int idLocal; // Calculado automaticamente por su programa
	int pisoLocal;
	int numeroLocal;
	int numLocalxPiso;//Columnas
	// Completelo con lo que quiera
} local_t;

local_t espacioMatriz(int numPisos, int numLocal);

void ingresarLocal(local_t**cc, int cantPisos, int cantLocales);

void cambiarNombre(local_t**cc);

local_t* pedirlocal(local_t **centroComercial, int cantPisos, int cantLocales);

void valoracionLocal(local_t**cc, int cantPisos, int cantLocales);

void borrarLocal(local_t**cc, int cantPisos, int cantLocales);




#endif /* FUNCIONESCC_H_ */