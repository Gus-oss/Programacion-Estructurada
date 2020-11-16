#include<stdio.h>

int main (){
	//char carac = '*' , carac_2 = '-', car_3 = '+' ;
	int fila , colu ;   // int fila = 1, int colu = 1 
	int max_fila= 10; 
	//  int colu ; 
	int max_col= 10; 
	for(fila = 0 ; fila <= max_fila; fila = fila +1)
	{
	
		for(colu = 0 ; colu <= max_col ; colu = colu +1 )
		{
			if(fila == 0 || fila == max_fila  ){
				if(fila == 0 && colu ==0 || fila ==0 && colu== max_col || fila == max_fila && colu ==0 || fila == max_fila && colu ==max_col )
				{
					printf("+"/*, car_3*/);
				}else {
					printf("-"/*, carac_2*/);
				}	
		}else{
			if( colu == 0|| colu == max_col )
			{
				printf("*" /*,carac*/);
			}else{
				printf(" ");
			}
				
		}
	
		} printf("\n");
		
	}
	return 0; 
}
