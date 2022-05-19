/* Autor: Oscar Vivaldi Partido Ramirez, realizado: 06/02/2022			
	tarea 1 programa que calculara el area de una corona circular 
	*/
#include <stdio.h>
#include<math.h>
#include<Cmath>


int main(){
	//declaracion de variables 
	float R, r, area ;

	//entrada de datos
	printf("ingrese el valor del radio  mayor (R):  ");
	scanf("%f", &R);
	printf("ingrese el valor de radio  menor (r):  ");
	scanf("%f", &r);
	
	//proceso 
	area=M_PI*(pow(R,2)- (pow(r, 2)));
	
	//SALIDA
	printf("el area de la corona circular   es: %f",area);

return 0;
}


