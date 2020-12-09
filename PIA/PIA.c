#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//****************************************************************   
//Este programa abre un archivo .csv y lo lee en pantalla
//Fecha de ultima modificación: 09/12/2020
//****************************************************************         
struct EVALUATIONS{                                                                          
	char Enrollment[7];                                                         
	int FirstQuiz;                                                        
	int SecondQuiz;  
	int ThirdQuiz; 
	int FourthQuiz; 
	int FifthQuiz;
	int SixthQuiz; 
	int SeventhQuiz;                                                    
};
//***************************************************************
int LINES(FILE *fpcp){
	int comparison , Accountant = 0 , Index = 0; 
	char cad0[255], cad1[255];
	fgets (cad1, 255 , fpcp); 
	do{
		fgets(cad0, 255, fpcp);
		comparison  = strcmp(cad0, cad1);
		Accountant++;
		strcpy(cad1, cad0);
		Index++; 
	}
	while(comparison  != 0);
	return Accountant; 
}
//***************************************************************
void HEADER_READING(FILE *fpcpy2){
	char Header[255];
	fgets(Header , 255 , fpcpy2); 
	printf("%s", Header);
}
//***************************************************************
//***************************************************************
void DATA_READING(FILE *fpcpy3, struct EVALUATIONS *tupla2){
	char Mat[7];
	int First_Quiz, Second_Quiz, Third_Quiz, Fourth_Quiz,Fifth_Quiz, 
	Sixth_Quiz, Seventh_Quiz ;  
	fscanf(fpcpy3, "%[^,] , %d, %d, %d, %d, %d, %d, %d\n" , Mat, 
	&First_Quiz, &Second_Quiz, &Third_Quiz, &Fourth_Quiz, &Fifth_Quiz, 
	&Sixth_Quiz, &Seventh_Quiz ); 
	strcpy(tupla2->Enrollment,Mat); 
	tupla2->FirstQuiz = First_Quiz ;
	tupla2->SecondQuiz = Second_Quiz;
	tupla2->ThirdQuiz = Third_Quiz;
	tupla2->FourthQuiz = Fourth_Quiz;
	tupla2->FifthQuiz = Fifth_Quiz;
	tupla2->SixthQuiz = Sixth_Quiz;
	tupla2->SeventhQuiz = Seventh_Quiz;
}
//******************************************************************
void PRINT(struct EVALUATIONS *tupla3 ,FILE *file_pointer){
	 /*f*/ //printf(/*file_pointer,*/"%s %5d %10d %8d %8d %8d %8d %8d\n", 
	  fprintf(file_pointer,"%s %d %d %d %d %d %d %d\n", 
	 tupla3->Enrollment, 
	 tupla3->FirstQuiz,
	 tupla3->SecondQuiz, 
	 tupla3->ThirdQuiz,
	 tupla3->FourthQuiz, 
	 tupla3->FifthQuiz, 
	 tupla3->SixthQuiz,
	 tupla3->SeventhQuiz );
}
//***********************************************************************
int get_Quiz(struct EVALUATIONS *tupla2, char *column_name){
   if(strcmp(column_name , "FirstQuiz") == 0){
   	return tupla2-> FirstQuiz ;
   }
   if(strcmp(column_name , "SecondQuiz") == 0){  //se cambia el FirstQUIZ
   	return tupla2-> SecondQuiz ;
   }
   if(strcmp(column_name , "ThirdQuiz") == 0){
   	return tupla2-> ThirdQuiz ;
   }
   if(strcmp(column_name , "FourthQuiz") == 0){
   	return tupla2-> FourthQuiz ;
   }
   if(strcmp(column_name , "FifthQuiz") == 0){
   	return tupla2-> FifthQuiz ;
   }
   if(strcmp(column_name , "SixthQuiz") == 0){
   	return tupla2-> SixthQuiz ;
   }
   if(strcmp(column_name , "SeventhQuiz") == 0){
   	return tupla2-> SeventhQuiz ;
   }
}
//***********************************************************************
float PromedioParaMateria(struct EVALUATIONS *tupla2, char *colu, int n){
	int i , sum = 0; 
	for(i=0 ; i<n; i++){
		sum += get_Quiz(&tupla2[i], &colu) ;
	} return sum/n ;
}
//***********************************************************************
float IdentificadorAlumno(struct EVALUATIONS *tupla2, char *MAT, int n){
	int i , posicion = 0; 
	for(i=0 ; i<n; i++){
		if(strcmp(MAT , "Enrollment") == 0){
   	return tupla2-> Enrollment ;
   }
	} 
}
//***********************************************************************
float PromedioParaAlumno(struct EVALUATIONS *tupla2, char *Enrollment , int n ){
	int posicion, sum ;
	posicion = ObtenerPosicion(tupla2, Enrollment, n) ;
	sum = tupla2[posicion].FirstQuiz + tupla2[posicion].SecondQuiz + tupla2[posicion].SecondQuiz + tupla2[posicion].ThirdQuiz + tupla2[posicion].FourthQuiz + tupla2[posicion].Fifth + tupla2[posicion].SixthQuiz + tupla2[posicion].SeventhQuiz  ; 
	return sum/7 ; 
}
//***********************************************************************
void TITLTE(FILE *archivo){
	fprintf(archivo,"Matricula, Parcial1, Parcial2, Parcial3, Parcial4, Parcial5, Parcial6, Parcial7");
}
//***********************************************************************
int main(){
	FILE *fp; 
	int Row_number;
	int n = 30 ; 
	struct EVALUATIONS EVALUATIONS[n];
	//fp = fopen("calificaciones_pia_pe.csv","r+"); 
	fp = fopen("calificaciones_pia_pe1.csv","w+"); 
	Row_number = LINES(fp);
	rewind(fp);
	int Index;  
	for( Index = 0;  Index< Row_number; Index++){
		if(Index == 0){
			HEADER_READING(fp);
		}else{
			DATA_READING(fp, &EVALUATIONS[Index - 1] ); 
	         PRINT(  &EVALUATIONS[Index - 1 ], fp);
		}
    }
	fclose(fp);
	return 0 ; 
}
//*************************************************************************
