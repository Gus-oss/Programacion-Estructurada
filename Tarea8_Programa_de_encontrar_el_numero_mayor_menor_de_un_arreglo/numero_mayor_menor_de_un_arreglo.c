#include <stdio.h>
//**************************************************************
void mayor_menor(int vector[], int mayor, int menor, int i){
	for (i=0; i<10; i++){
    if (vector[i]> mayor){
    mayor=vector[i];
    }
    if (vector[i]< menor){
    menor=vector[i];
    }
}
printf("El mayor es %d\n", mayor);
printf("El menor es %d\n", menor);
}
//****************************************************************
int main(){
 
int vector[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
int i;
int mayor;
int menor;
mayor = vector[0]; 
menor = vector[0]; 
mayor_menor(vector, mayor, menor, i);
return 0; 
}
//***************************************************************
