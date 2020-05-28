
#ifndef FUNCIONESCC_H_
#define FUNCIONESCC_H_
#include<stdlib.h>
#include<stdio.h>

typedef enum estadoT{

	ABIERTO,
	CERRADO,

}estado;

//Local 
typedef struct Local{
	char nombreLocal[20];
	int idLocal; 
	int pisoLocal;
	int numeroLocal;
	int numLocalxPiso;
	int rentaDebe;
	estado estadoT;
} local_t;

local_t espacioMatriz(int numPisos, int numLocal);

void ingresarLocal(local_t**matrizCC, int cantPisos, int cantLocales);

void cambiarNombre(local_t**matrizCC);

local_t* pedirlocal(local_t **matrizCC, int cantPisos, int cantLocales);

void valoracionLocal(local_t**matrizCC, int cantPisos, int cantLocales);

void borrarLocal(local_t**matrizCC, int cantPisos, int cantLocales);

void localesArriendo (local_t**matrizCC, int cantPisos, int cantLocales);

void guardarLocalRenta(local_t ** matrizCC, int cantPisos, int cantLocales);

void estadoLocal (local_t ** matrizCC, int cantPisos, int cantLocales);




#endif /* FUNCIONESCC_H_ */