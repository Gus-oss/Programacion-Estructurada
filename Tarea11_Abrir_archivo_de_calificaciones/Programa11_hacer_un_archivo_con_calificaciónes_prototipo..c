#include<stdio.h>
#include<stdlib.h>
int main(){
	
	FILE *fp ; 
	fp = fopen("CalificacionesDelSemestre.csv", "w+"); 
	fprintf(fp, "Matricula, PrimerParcial, SegundoParcial, PIA, CalificaciónFinal\n");     
	fprintf(fp, "1738578, 85, 90,80,85\n"); 
	fprintf(fp, "1859387, 80, 70,50,100\n"); 
	fprintf(fp, "1957444, 100, 70,90,100\n");
	fclose(fp);
	printf("Archivo guardado"); 
	
}

