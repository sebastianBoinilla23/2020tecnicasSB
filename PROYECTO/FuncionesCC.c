#include "FuncionesCC.h"

local_t** crearMatriz(int cantPisos, int cantLocales){
	local_t** matrizCC = malloc(sizeof(local_t*)*cantPisos));
	int i;
	for(i=0;i<cantPisos;i++){
		matrizCC[i] = malloc(sizeof(local_t)*cantLocales));
	}
}

void ingresarLocal(local_t**matrizCC, int cantPisos, int cantLocales){

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
	        scanf("%s", matrizCC[pisoPedido][localPedido].nombreLocal);
	        matrizCC[pisoPedido][localPedido].idLocal = idP;
		    matrizCC[pisoPedido][localPedido].pisolocal = pisoPedido;
			matrizCC[pisoPedido][localPedido].numeroLocal = localPedido;
			matrizCC[pisoPedido][localPedido].rentaDebe = {};
			matrizCC[pisoPedido][localPedido].estadoT = CERRADO;
		}
	}
}

void cambiarNombre(local_t**matrizCC){
    local_t*local;
    printf("Ingrese el nombre que desea cambiar\n");
    fflush(stdin);
        fgets(local.nombreLocal, 20, stdin );
        local.nombreLocal[strcspn(local.nombreLocal, "\n")] = 0;
    return local;
}


local_t* buscarPorNombre(local_t **matrizCC, int cantPisos, int cantLocales){
    char nom[20];
    printf("Ingrese el nombre del local");
    scanf("%s", &nom);
    int i, j;
    for (i = 0; i < cantPisos; i++){
        for (j = 0; j < cantPisos; j++){
            if (!strcmp(matrizCC[i][j].nombreLocal, nom))
                printf(&matrizCC[i][j]);
        }
    }
}

void valoracionLocal(local_t**matrizCC, int cantPisos, int cantLocales){
	int pisoPedido, localPedido, idP;
	printf("Ingrese el piso que desea\n");
	scanf("%d", &pisoPedido);
	printf("Ingrese el local\n");
	scanf("%d", &localPedido);
	printf("Ingrese un id");
    scanf("%d", &idP);

	if(matrizCC[pisoPedido][localPedido].idLocal==idP){
		int valoracion;
		printf("Ingrese puntaje de 1 a 5\n");
		scanf("%d", &valoracion);
	}
}

void borrarLocal(local_t**matrizCC, int cantPisos, int cantLocales){
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
			if (matrizCC[pisoPedido][localPedido].idLocal==idP){
				matrizCC[pisoPedido][localPedido].idLocal = 0;
				matrizCC[pisoPedido][localPedido].nombreLocal={};
				matrizCC[pisoPedido][localPedido].pisolocal = {};
			    matrizCC[pisoPedido][localPedido].numeroLocal = {};

			}
		}
	}

}

void localesArriendo (local_t**matrizCC, int cantPisos, int cantLocales){
	char nom[20];
    printf("Ingrese el nombre del local");
    scanf("%s", &nom);
    int i, j;
    for (i = 0; i < cantPisos; i++){
        for (j = 0; j < cantPisos; j++){
            if (!strcmp(cc[i][j].nombreLocal, nom)){
				int renta;
				printf("agregue el valor a pagar\n");
				scanf("%d", &renta);
				matrizCC[i][j].rentaDebe=renta;
			}

		}
	}
}

void guardarLocalRenta(local_t ** matrizCC, int cantPisos, int cantLocales){
  int i, j;
  local_t localLista;
  FILE *fileMCC;
  fileMCC = fopen(file ,"wb");
   for(i = 0; i < cantPisos; i++){
      for(j = 0; j < cantLocales; j++){
        if(matrizMall[i][j].rentaDebe != {}){
          localActual = matrizMall[i][j];
          fwrite(&localLista, sizeof(local_t), 1, fileMCC); 
          printf("Se guardo el: %s\n", localActual.nombreLocal);
      }
    }    
   }
   fclose(fileMCC); 
}

void estadoLocal (local_t ** matrizCC, int cantPisos, int cantLocales){
	char nom[20];
    printf("Ingrese el nombre del local");
    scanf("%s", &nom);
    int i, j;
    for (i = 0; i < cantPisos; i++){
        for (j = 0; j < cantPisos; j++){
            if (!strcmp(matrizCC[i][j].nombreLocal, nom)){
				int est;
                printf(&matrizCC[i][j]);
				printf("Desea cambiar el estado del local\n");
				printf("1.ABIERTO\n");
				printf("2.CERRADO\n");
				scanf("%d", est);
				if (est == 1){
					matrizCC[i][j].estadoT = ABIERTO;
				}
				else if(est ==2){
					matrizCC[i][j].estadoT = CERRADO;
				}
			}
        }
    }

}


