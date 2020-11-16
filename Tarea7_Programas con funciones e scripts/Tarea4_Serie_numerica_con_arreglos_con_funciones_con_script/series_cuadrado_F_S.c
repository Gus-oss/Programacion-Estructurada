#include <stdio.h>
#include <stdlib.h>
int  gauss_ecuacion(int y) {
   	 return  (y)*(y + 1)*(2*(y) + 1)/6 ; 
}
//********************************************************************************
void gauss_sumatoria( int elementos_maximos , int indice, int sumatoria, int serie[] ){
	//int indice = 0 ;
	 for(indice = 1; indice <= elementos_maximos ; indice++){
          serie[indice] = indice*indice ;
     }
     // int sumatoria = 0;
     for(indice = 1; indice <= elementos_maximos ; indice++){
         sumatoria = sumatoria + serie[indice];
     }
      printf("Valores sumados: ");
     for(indice = 1; indice <= elementos_maximos ; indice++){
          printf("%d ", serie[indice]);
     }
      printf("\nSumatoria %d\n", sumatoria);
}
//********************************************************************************
 int main(int argc , char **argv){
 	int indice = 0 ;
 	int sumatoria = 0 ; 
 	 int total_calculado ;
     int elementos_maximos = atoi(argv[1]) ; /* cambiar el atoi(argv[1]) por algun numero */
     int serie[elementos_maximos];
    //int indice;
      gauss_sumatoria( elementos_maximos , indice , sumatoria, serie)  ;
      printf("Total calculado = %d\n", gauss_ecuacion(elementos_maximos));
 }
 //*******************************************************************************
