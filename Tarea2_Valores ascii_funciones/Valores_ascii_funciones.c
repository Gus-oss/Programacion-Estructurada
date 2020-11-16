#include<stdio.h>
#include<stdlib.h>
//caso caracter
//caso mayusculas
//caso minuscula

char ver(char , int);

int main (int argc, char **argv ) {
	//************** casos****************************//
	char caracter = '&'; //atoi(argv[0]) ;//;'?' ;  //en lugar de poner caracter---->argv 
	int valor_ascii = (int)caracter; 
	//************************************************//
	printf("El valor ascii es %d\n", valor_ascii) ;
//	printf("  ", ver(caracter,valor_ascii)); 
	ver(caracter,valor_ascii);
			
			return 0; 
		} 
//**************************************************************************************************
char ver(char caracter, int valor_ascii){ 
	 if(valor_ascii >= 48 && valor_ascii <= 57){
		return printf("El valor %c es digito ", caracter) ; //esta linea calcula que es un digito
			 }else {
				 if(valor_ascii >= 65 && valor_ascii <=90)// esta para saber si es una mayuscula
				 {
				 	return printf("El valor %c es mayuscula", caracter);// 
				 	
				 }else{
				 	if (valor_ascii >= 97 && valor_ascii <= 122 ){ //esta ára saber si es minuscula
				 		return printf("El valor %c es minuscula", caracter);
					 }else{
					 	return printf("Es valor %c es caracter especial", caracter);// esta para saber si es caracter especial.
					 }
				 }
			} 
    
}
//*****************************************************************************************************





