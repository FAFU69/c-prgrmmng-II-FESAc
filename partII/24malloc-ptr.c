/*
Implemente documentacion interna
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, i , n1, n2;
 printf("Ingrese el tamanio del arreglo: \n");
    scanf("%d", &n1);
    ptr = (int*) malloc(n1 * sizeof(int));
printf("Direccion de memoria asignada previamente: \n");
 for(i = 0; i < n1; ++i){
         printf("%p\t", ptr + i);
 }

printf("\nIngrese el nuevo tamanio del arreglo: \n");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2);
    for(i = 0; i < n2; ++i){
      printf("%p\t", ptr + i);
      printf("\n");
    }

    free(ptr);
    return 0;
}
