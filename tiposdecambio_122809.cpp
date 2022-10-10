#include <stdio.h>
#include <stdlib.h>

int main(){
	int opc;
	float pesoarg=0;
    float divisa=0;
	float monedas=0;
	float cambio=0;
	int monedass(float x);
	
	printf("\n CAMBIO DE MONEDA  \n");
	printf("\n 1- EURO  \n");
	printf("\n 2- DOLAR \n");
	printf("\n 3- PESO MEXICANO \n");
	printf("\n 4- PESO CHILENO \n");
	printf("\n 5- REAL \n");
	printf(" \n Selecciona un tipo de cambio \n");
	scanf("%d", &opc);
	
	
	//tipos de cambio según la selección
	switch(opc){
		case 1:
			printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%f", &pesoarg);
		    printf("\n Ingrese el precio actual del Euro: \n");
		    scanf("%f", &divisa);
		    cambio= pesoarg / divisa;
		    printf("El cambio es  %f ", cambio);
		    break;
		    
		case 2:
			printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%f", &pesoarg);
		    printf("\n Ingrese el precio actual del Dolar: \n");
		    scanf("%f", &divisa);
		    cambio= pesoarg / divisa;
		    printf("El cambio es  %f ", cambio);
			break;
			
		case 3:
			printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%f", &pesoarg);
		    printf("\n Ingrese el precio actual del Peso Mex: \n");
		    scanf("%f", &divisa);
		    cambio= pesoarg / divisa;
		    printf("El cambio es  %f ", cambio);
			break;
			
		case 4:
		  	printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%f", &pesoarg);
		    printf("\n Ingrese el precio actual del Peso Chileno : \n");
		    scanf("%f", &divisa);
		    cambio= pesoarg / divisa;
		    printf("El cambio es  %f ", cambio);
		    break;
		    
		case 5:
		  	printf("\n Ingrese el monto a cambiar expresado en pesos argentinos \n");
		    scanf("%f", &pesoarg);
		    printf("\n Ingrese el precio actual del Real: \n");
		    scanf("%f", &divisa);
		    cambio= pesoarg / divisa;
		    printf("El cambio es  %f ", cambio);
		    
		    break;
		    	
	}
	int cambiomon;
	printf("\n Si usted desea recibir cambio presione 1 de lo contrario presione 2 \n");
	scanf("%d", &cambiomon);
	if(cambiomon ==1){
		
	monedass(cambio);
		
	}else{
		printf("Muchas gracias");
	}}
	
//funcion para dar cambio de billetes y monedas 
int monedass(float x){
int c100=0,c10=0,c5=0,c1=0;
while(x>=100){
x-=100;
c100++;
}
printf("\n\n Se entregan %d billetes de 100 ",c100);
while(x>=10){
x-=10;
c10++;
}
printf("\n Se entregan %d billetes de 10 ",c10);
while(x>=5){
x-=5;
c5++;
}
printf("\n Se entregan %d billetes de 5",c5);
while(x>=1){
x-=1;
c1++;
}
printf("\n Se entregan %d monedas de 1 ",c1);
}
	

