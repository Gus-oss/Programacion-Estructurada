#include<stdio.h>

int main (){
	char carac = '*' , carac_2 = '-', car_3 = '+' ;
	int fila = 0, max_fila= 5; 
	int colu = 0 , max_col= 5; 
	for(fila = 1 ; fila <= max_fila; fila = fila +1)
	{
	
		for(colu = 1 ; colu <= max_col ; colu = colu +1 )
		{
			if(fila == 1 || fila == max_fila  ){
				if(fila == 1 && colu ==1 || fila ==1 && colu== max_col || fila == max_fila && colu ==1 || fila == max_fila && colu ==max_col )
				{
					printf("%c", car_3);
				}else {
					printf("%c", carac_2);
				}	
		}else{
			if( colu == 1|| colu == max_col )
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
