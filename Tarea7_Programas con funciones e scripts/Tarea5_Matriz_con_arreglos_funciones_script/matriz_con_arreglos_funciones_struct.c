#include <stdio.h>
#include <stdlib.h>
//*********************************************************************************
void genera_matriz(int elementos_maximos , int indice_x ,int indice_y , int matriz[elementos_maximos][elementos_maximos] ){
	     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz[indice_y][indice_x] = indice_x+indice_y;
       }
     }
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         matriz[indice_y][indice_x] = matriz[indice_y][indice_x]+10;
       }
     }
     printf("Valores multiplicados: \n");
     for(indice_y = 0; indice_y < elementos_maximos; indice_y++){
       for(indice_x = 0; indice_x < elementos_maximos; indice_x++){
         printf("%d, ", matriz[indice_y][indice_x]);
       }
       printf("\n");
     }
}
//*******************************************************************************
 int main(int argc, char **argv){
     int elementos_maximos = atoi(argv[1]);
     int matriz[elementos_maximos][elementos_maximos];
     int indice_x;
     int indice_y;
     genera_matriz(elementos_maximos, indice_x, indice_y , matriz ) ;
     return 0;
 }
