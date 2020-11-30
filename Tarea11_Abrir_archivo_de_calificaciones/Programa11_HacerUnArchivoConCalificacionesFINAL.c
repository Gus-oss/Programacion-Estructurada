#include<stdio.h>
#include<stdlib.h>

struct Alumnos1{ 
	char matricula [255];
	int primerparcial; 
	int segundoparcial; 
	int pia; 
	float calfinal; 
	};
	
int main(){
	int i ; 
	int n = 2 ; //El numero de alumnos seran n+1
	struct Alumnos1 Alumnos[n]; 
    
    for(i = 0 ; i<= n; i++){
	printf("****************************\n");
	printf(" Matricula:");
	scanf("%s", &Alumnos[i].matricula) ; 
	printf(" Primer Parcial:");
	scanf("%d", &Alumnos[i].primerparcial) ; 
	printf(" Segundo Parcial:");
	scanf("%d", &Alumnos[i].segundoparcial) ;
	printf(" Pia:");
	scanf("%d", &Alumnos[i].pia) ;
	printf("Calificacion final:");
	scanf("%f", &Alumnos[i].calfinal) ;
	printf("****************************\n");

	}
	FILE *fp; 
	for(i = 0 ; i <= n ; i++){

	fp = fopen("CalificacionesDelSemestre1.csv", "w+"); 
	fprintf(fp, "Matricula, PrimerParcial, SegundoParcial, PIA, CalificaciónFinal\n");     
    for (i = 0; i<= n ; i++ ){ 
    	fprintf(fp, "%s , %d, %d, %d, %.2f" , Alumnos[i].matricula , Alumnos[i].primerparcial, Alumnos[i].segundoparcial, Alumnos[i].pia
	, Alumnos[i].calfinal) ; 
	fprintf(fp, "\n");
	}

	}
    fclose(fp); 
	printf("Archivo guardado"); 
	
}
