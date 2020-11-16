//*****************************************************
//  Ultima modificación: 6/11/2020 , 10:42pm          *
//  Este programa hace un cuadrito donde las esquinas *
//  estan asteriscos y los laterales y bases estan de *
//  otro caracter                                     *
//Autor: Gustavo de Jesús Escobar Mata                *
//******************************************************
#include<stdio.h>
#include<stdlib.h>

void imprime_cuadrado(int fila, int colu, int max_fila , int max_col /*, char carac , char carac_2 , char car_3*/ ){
   	for(fila = 0 ; fila <= max_fila; fila = fila +1)
	{
		for(colu = 0 ; colu <= max_col ; colu = colu +1 )
		{
			if(fila == 0 || fila == max_fila  ){
				if(fila == 0 && colu == 0 || fila == 0 && colu== max_col || fila == max_fila && colu == 0  || fila == max_fila && colu ==max_col )
				{
					 printf("+"/*, car_3*/);
				}else {
					 printf("-" /*,carac_2*/);
				}	
		}else{
			if( colu == 0|| colu == max_col )
			{
				 printf("*"/*,carac*/);
			}else{
				 printf(" ");
			}
				
		}
	
		}  printf("\n");
		
	}  
	
}

int main (int numero_de_argumentos , char **argv){ 
	
	/*char carac = '*'  ; 
	char carac_2 = '-';
	char car_3 = '+' ;*/ 
	int fila , colu ;  
	int max_fila= atoi(argv[1]);//10;  
	int max_col = atoi(argv[2]);//10; 
	imprime_cuadrado(fila, colu, max_fila , max_col /*,  carac,  carac_2,  car_3*/); 

	

	return 0; 
}
