#include "FuncionesCC.h"
#include <stdio.h>

int main(){
	int cantPisos, cantLocales;
	printf("Ingrese numero de pisos\n");
	scanf("%d", &cantPisos);
	printf("Ingrese numero de locales")
	scanf("%d", &cantLocales);
	local_t** cc = espacioMatriz(cantPisos,cantLocales);


	int opc;

	do{
		opc=menu();
		switch (opc)
		{
		case 1:ingresarLocal(local_t**cc, int cantPisos, int cantLocales);
			break;
		case 2:cambiarNombre(local_t**cc);
		    break;
	    case 3:pedirlocal(local_t **centroComercial, int cantPisos, int cantLocales);
		    break;
		case 4:valoracionLocal(local_t**cc, int cantPisos, int cantLocales)
		    break;
		case 5:borrarLocal(local_t**cc, int cantPisos, int cantLocales)
		    break;
		case 6:
		    break;

		default:printf("Valor ingresado invalido");
			break;
		}

	} while (opc!=7);
	
	return 0;
}