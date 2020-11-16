#include<stdio.h>
#include<stdlib.h>
//*******************************************************************
int factorial (int numero)
{
  if (numero <= 1) 
    return 1;
  else 
    return numero * factorial (numero - 1);
}
//*******************************************************************
int main(int argc ,char **argv)
{
  int numero = atoi(argv[1]);
  int resp;
  resp = factorial(numero) ; 
  printf("\n El factorial de %d es: %d \n", numero, resp );
   return 0; 
}
//******************************************************************

