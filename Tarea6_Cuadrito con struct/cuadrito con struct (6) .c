#include<stdio.h>

struct cuadrilatero 
{
	int altura ; 
	int base ; 
};


int main (){
	char carac = '*' , carac_2 = '-', car_3 = '+' ;
	int fila = 0 ; //max_fila= 10; 
	int colu = 0 ; //max_col= 10; 
	struct cuadrilatero cuadrilatero1;
	cuadrilatero1.base = 10 ;    //max_fila = 10
	cuadrilatero1.altura = 10 ;    //max_colu = 10
	for(fila = 1 ; fila <= cuadrilatero1.base ; fila = fila +1)
	{
	
		for(colu = 1 ; colu <= cuadrilatero1.altura ; colu = colu +1 )
		{
			if(fila == 1 || fila == cuadrilatero1.base  ){
				if(fila == 1 && colu ==1 || fila ==1 && colu== cuadrilatero1.altura || fila == cuadrilatero1.base && colu ==1 || fila == cuadrilatero1.base && colu == cuadrilatero1.altura )
				{
					printf("%c", car_3);
				}else {
					printf("%c", carac_2);
				}	
		}else{
			if( colu == 1|| colu == cuadrilatero1.altura )
			{
				printf("%c",carac);
			}else{
				printf(" ");
			}
				
		}
	
		} printf("\n");
		
	}
	return 0; 
}


