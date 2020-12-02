#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//****************************************************************   
//Este programa abre un archivo .csv y lo lee en pantalla
//Fecha de ultima modificación: 02/12/2020
//****************************************************************         
struct EVALUATIONS{                                                                          
	char Enrollment[15];                                                         
	int FirstQuiz;                                                        
	int SecondQuiz;                                                       
	int ILP;
	float final;
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
void DATA_READING(FILE *fpcpy3, struct EVALUATIONS *tupla2){
	char Mat[15];
	int First_Quiz, Second_Quiz, ilp ; 
	float Final; 
	fscanf(fpcpy3, "%[^,] , %d, %d, %d, %f\n" , Mat, &First_Quiz
	, &Second_Quiz, &ilp , &Final); 
	strcpy(tupla2->Enrollment,Mat); 
	tupla2->FirstQuiz = First_Quiz ;
	tupla2->SecondQuiz = Second_Quiz; 
	tupla2->ILP = ilp; 
	tupla2->final = Final ; 
}
//******************************************************************
void PRINT(struct EVALUATIONS *tupla3){
	int FixedLength = 14;
	printf("%s %*d %*d %7d %*.2f\n", tupla3->Enrollment,FixedLength, 
	tupla3->FirstQuiz,FixedLength, tupla3->SecondQuiz, tupla3->ILP,
	FixedLength, tupla3->final);
}
//***********************************************************************
int main(){
	FILE *fp; 
	int Row_number;
	int n = 3 ; 
	struct EVALUATIONS EVALUATIONS[n];
	fp = fopen("CalificacionesDelSemestre1.csv","r+"); // en lugar de \\ se pondra // a ver si jala C: //Users//GUSTA//OneDrive//Documentos//Facultad(FCFM)(lic_mate)//Segundo semestrae//Programacion estructurada//Actividades//Otros programas//Tarea11_Abrir_archivo_de_calificaciones//CalificacionesDelSemestre1.csv
	Row_number = LINES(fp);
	rewind(fp);
	int Index; 
	for( Index = 0;  Index< Row_number; Index++){
		if(Index == 0){
			HEADER_READING(fp);
		}else{
			DATA_READING(fp, &EVALUATIONS[Index - 1]); 
			PRINT(&EVALUATIONS[Index - 1 ]);
		}
	}
	fclose(fp);
	return 0 ; 
}
//*************************************************************************
