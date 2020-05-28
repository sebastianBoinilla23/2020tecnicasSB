#include "FuncionesCC.h"
#include <stdio.h>
#include <stdlib.h>

int menu(){
	int opcion;
	printf("MENU\n");
	printf("==============\n");
	printf("1.Ingresar nuevo local\n");
	printf("2.Cambiar nombre\n");
	printf("3.buscar por nombre\n");
	printf("4.Valoracion local\n");
	printf("5.Eliminar local\n");
	printf("6.Agregar arriendo de locales\n");
	printf("7.Guardar locales deudores\n");
	printf("8.Estado de los locales\n");
	printf("0.Salir\n");
	scanf("%d", &opcion);

	return opcion;

}


int main(){
	int cantPisos, cantLocales;
	printf("Ingrese numero de pisos\n");
	scanf("%d", &cantPisos);
	printf("Ingrese numero de locales");
	scanf("%d", &cantLocales);
	local_t** matrizCC = crearMatriz (cantPisos, cantLocales);
	
    int opc;
	
	do{
		opc=menu();
		switch (opc){
		case 1:ingresarLocal(matrizCC, cantPisos, cantLocales);
			break;
		case 2:cambiarNombre(matrizCC);
		    break;
	    case 3:pedirlocal(matrizCC, cantPisos, cantLocales);
		    break;
		case 4:valoracionLocal(matrizCC, cantPisos, cantLocales);
		    break;
		case 5:borrarLocal(matrizCC, cantPisos, cantLocales);
		    break;
		case 6:localesArriendo (matrizCC,  cantPisos,  cantLocales);
		    break;
		case 7:guardarLocalRenta(matrizCC,  cantPisos,  cantLocales);
		    break;
		case 8:estadoLocal (matrizCC,  cantPisos, cantLocales);
		    break;
		default:printf("Valor ingresado invalido");
			break;
		}

	} while (opc!=0);
	
	return 0;
}