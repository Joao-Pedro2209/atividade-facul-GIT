#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
	float n1, n2, n3, media;
char conc;

printf("Informe a primeira nota:");
scanf("%f", &n1);

printf("Informe a segunda nota:");
scanf("%f", &n2);

printf("Informe a terceira nota:");
scanf("%f", &n3);

media = (n1+n2+n3)/3;

if(media>=8.5){
	conc='A';
}else if(media>=7.0 && media<8.5){
	conc='B';
}else if(media>=6.0 && media<7.0){
	conc='C';
}else{
	conc='D';
}

printf("\nConceito: %c", conc);
printf("\nMedia final: %.2f", media);

if(media>=6.0){
	printf("\nAprovado");
}else{
	printf("\nReprovado");
}

}




