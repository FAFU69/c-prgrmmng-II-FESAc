#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

   char name[10];
   char *description;

   strcpy(name, "Jose Perez");


   /* Asignacion dinamica de memoria*/
   description = malloc( 45 * sizeof(char) );
	

   if( description == NULL ) {
      fprintf(stderr, "Error-no se puede asignar la memoria requerida\n");
   } else {
      strcpy( description, "Jose Perez es un estudiante de Programacion II");
   }
   

   printf("Nombre = %s\n", name );
   printf("Descripcion: %s\n", description );
}
