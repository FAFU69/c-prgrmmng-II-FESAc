/*
Ejercicio: implementa documentacion interna
*/

#include <stdio.h>

int main() 
{

	float a = 2.0; 
	float * ptr_a = &a;
	float ** ptr_ptr_a = &ptr_a;

printf("El apuntador de un apuntador: ** ptr_ptr_a = %f\n", ** ptr_ptr_a);


    return 0;
}

