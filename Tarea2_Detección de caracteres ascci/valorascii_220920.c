#include<stdio.h>
//caso caracter
//caso mayusculas
//caso minuscula
int main () {
	//************** casos****************************//
	char caracter = '%' ; 
	int valor_ascii = (int) caracter; 
	//************************************************//
	printf("El valor ascii es %d\n", valor_ascii) ;
	//***********************************************//
	//*********proceso*******************************//
    if(valor_ascii >= 48 && valor_ascii <= 57){
		printf("El valor %c es digito ", caracter) ; //esta linea calcula que es un digito
			}else {
				 if(valor_ascii >= 65 && valor_ascii <=90)// esta para saber si es una mayuscula
				 {
				 	printf("El valor %c es mayuscula", caracter);// 
				 	
				 }else{
				 	if (valor_ascii >= 97 && valor_ascii <= 122 ){ //esta ára saber si es minuscula
				 		printf("El valor %c es minuscula", caracter);
					 }else{
					 	printf("Es valor %c es caracter especial", caracter);// esta para saber si es caracter especial.
					 }
				 }
			}
			return 0; 
		} 
	//************************************************//

