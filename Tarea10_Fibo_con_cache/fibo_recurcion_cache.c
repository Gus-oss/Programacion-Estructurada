#include <stdio.h>
#include <stdlib.h>

long cache[100];
int contador = 0;
int contador_cache = 0;
//*************************************************************************************************
long fibonacci (long numero ) { 
    contador ++;
    if(numero == 0 || numero == 1) {
    	return 1 ; 
	}else {
		return fibonacci(numero-1) + fibonacci(numero-2);
	}
}
//************************************************************************************************
long factorial_cached(long  numero){
    contador_cache++;
    long valor_en_cache = cache[numero];
    if(valor_en_cache <= 0){
        cache[numero] = factorial_cached(numero-1) + factorial_cached(numero-2);
        valor_en_cache = cache[numero];
    }
    return valor_en_cache;
}
//************************************************************************************************
int main(int numero_de_argumentos, char **valores){
	printf("\n*****************************************************************************\n");
    printf("Este programa calcula la suma de la posicion ingresada mas la que le antesede \n");
    printf("\n*****************************************************************************\n");
	long posicion_a_calcular = 0;
    cache[0]=1;
    cache[1]=1;
    int i =1 ; 
    for(i = 1; i < numero_de_argumentos; i++){
        posicion_a_calcular = atol(valores[i]);
        printf("El numero es: %d\tSu fibonacci es : %ld\n", posicion_a_calcular, fibonacci(posicion_a_calcular));
    }
    printf("La funcion factorial fue llamada %ld\n",contador);
    printf("\n****************************************************************************\n");
    for(i = 1; i < numero_de_argumentos; i++){
        posicion_a_calcular = atol(valores[i]);
        printf("El numero es : %d\tSu fibonacci es: %ld\n", posicion_a_calcular, factorial_cached(posicion_a_calcular));
    }
    printf("La funcion factorial con memoria fue llamada %ld\n",contador_cache);
     printf("\n****************************************************************************\n");
    return 0;
}
//***********************************************************************************************
/* La secuencia de fibo es 0,1,1,2,3,5,..., 
Este programa cuenta desde el primer uno la posicion. 1--> posicion 1, 1---->posicion2, 2------>posicion3 y asi suesivamente
y confomre le des una posicion , digamos 5, el programa te devolera la posicion+el numero anterior. Si  nos posicionamos en 
posicion4 la funcion nos regresaria 5*/
