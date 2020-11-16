#include <stdio.h>
#include <stdlib.h>

long cache[100];
int contador = 0;
int contador_cache = 0;
//*************************************************************************************************
long  factorial(long numero){
    contador++;
    if(numero <= 1){
        return 1;
    }else{
        return numero * factorial(numero-1);
    }
}
//************************************************************************************************
long factorial_cached(long  numero){
    contador_cache++;
    long valor_en_cache = cache[numero];
    if(valor_en_cache <= 0){
        cache[numero] = numero * factorial_cached(numero-1);
        valor_en_cache = cache[numero];
    }
    return valor_en_cache;
}
//************************************************************************************************
int main(int numero_de_argumentos, char **valores){
    long posicion_a_calcular = 0;
    cache[0]=1;
    cache[1]=1;
    int i =1 ; 
    for(i = 1; i < numero_de_argumentos; i++){
        posicion_a_calcular = atol(valores[i]);
        printf("El numero es: %d\tSu factorial es : %ld\n", posicion_a_calcular, factorial(posicion_a_calcular));
    }
    printf("La funcion factorial fue llamada %ld\n",contador);
    printf("\n*****************************************************************\n");
    for(i = 1; i < numero_de_argumentos; i++){
        posicion_a_calcular = atol(valores[i]);
        printf("El numero es : %d\tSu factorial es: %ld\n", posicion_a_calcular, factorial_cached(posicion_a_calcular));
    }
    printf("La funcion factorial con memoria fue llamada %ld\n",contador_cache);
    return 0;
}
//***********************************************************************************************
