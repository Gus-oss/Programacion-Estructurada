#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//****************************************************************   
//Este programa abre un archivo .csv y lo lee en pantalla
//Fecha de ultima modificación: 07/12/2020
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
void PRINT(struct EVALUATIONS *tupla3){
	 printf("%s %5d %10d %8d %8d %8d %8d %8d\n", 
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
//***********************************************************************
int main(){
	FILE *fp; 
	int Row_number;
	int n = 30 ; 
	struct EVALUATIONS EVALUATIONS[n];
	fp = fopen("calificaciones_pia_pe.csv","r+"); 
	Row_number = LINES(fp);
	rewind(fp);
	int Index, Index2; 
	for( Index = 0;  Index< Row_number; Index++){
		if(Index == 0){
			HEADER_READING(fp);
		}else{
			DATA_READING(fp, &EVALUATIONS[Index - 1] ); 
	         PRINT(&EVALUATIONS[Index - 1 ]);
		}
    }
	fclose(fp);
	return 0 ; 
}
//*************************************************************************
