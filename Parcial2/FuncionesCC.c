  
#include "FuncionesCC.h"

int menu(){
	int opcion;
	printf("MENU\n");
	printf("==============\n");
	printf("1.Ingresar nuevo local\n");
	printf("2.Cambiar nombre\n");
	printf("3.buscar por nombre\n")
	printf("4.Valoracion local\n");
	printf("5.Eliminar local\n");
	printf("6.Salir\n");
	scanf("%d", &opcion);

	return opcion;

}


local_t espacioMatriz(int numPisos, int numLocal){
	local_t matrizCC = malloc(sizeof(local_t)(numPisos));
	for(i=0;i<numPisos;i++){
		matrizCC[i] = malloc(sizeof(local_t)*(numPisos));
	}
}

void ingresarLocal(local_t**cc, int cantPisos, int cantLocales){

	int pisoPedido, localPedido, idP;
	printf("Ingrese el piso que desea\n");
	scanf("%d", &pisoPedido);
	printf("Ingrese el local\n");
	scanf("%d", &localPedido);
	printf("Ingrese un id");
	scanf("%d", &idP);
	
	if (pisoPedido > cantPisos){
		if(localPedido> cantLocales){
			printf("No hay espacio");
		}
	}
	else if (pisoPedido < cantPisos){
		if(localPedido < cantLocales){
			printf("Ingrese nombre del local\n");
	        scanf("%s", cc[pisoPedido][localPedido].nombreLocal);
	        cc[pisoPedido][localPedido].idLocal = idP;
		    cc[pisoPedido][localPedido].pisolocal = pisoPedido;
			cc[pisoPedido][localPedido].numeroLocal = localPedido;
		}
	}
}

void cambiarNombre(local_t**cc){
    local_t*local;
    printf("Ingrese el nombre que desea cambiar\n");
    fflush(stdin);
        fgets(local.nombreLocal, 20, stdin );
        local.nombreLocal[strcspn(local.nombreLocal, "\n")] = 0;
    return local;
}


local_t* buscarPorNombre(local_t **centroComercial, int cantPisos, int cantLocales){
    char nom[20];
    printf("Ingrese el nombre del local");
    scanf("%s", &nom);
    int i, j;
    for (i = 0; i < cantPisos; i++){
        for (j = 0; j < cantPisos; j++){
            if (!strcmp(cc[i][j].nombreLocal, nom))
                printf(&cc[i][j]);
        }
    }
}

void valoracionLocal(local_t**cc, int cantPisos, int cantLocales){
	int pisoPedido, localPedido, idP;
	printf("Ingrese el piso que desea\n");
	scanf("%d", &pisoPedido);
	printf("Ingrese el local\n");
	scanf("%d", &localPedido);
	printf("Ingrese un id");
    scanf("%d", &idP);

	if(cc[pisoPedido][localPedido].idLocal==idP){
		int valoracion;
		printf("Ingrese puntaje de 1 a 5\n");
		scanf("%d", &valoracion);
	}
}

void borrarLocal(local_t**cc, int cantPisos, int cantLocales){
	int pisoPedido, localPedido, idP;
	printf("Ingrese el piso que desea\n");
	scanf("%d", &pisoPedido);
	printf("Ingrese el local\n");
	scanf("%d", &localPedido);

	if (pisoPedido > cantPisos){
		if(localPedido> cantLocales){
			printf("No hay espacio");
		}
	}
	else if (pisoPedido < cantPisos){
		if(localPedido < cantLocales){
			printf("Ingrese un id");
	        scanf("%d", &idP);
			if (cc[pisoPedido][localPedido].idLocal==idP){
				cc[pisoPedido][localPedido].idLocal = 0;
				cc[pisoPedido][localPedido].nombreLocal={};
				cc[pisoPedido][localPedido].pisolocal = {};
			    cc[pisoPedido][localPedido].numeroLocal = {};

			}
		}
	}

}

