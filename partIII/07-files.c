#include<stdio.h>



int main(){

FILE * fptr1, *fptr2;
char c1, c2;


fptr1 = fopen("archivo1.txt","r");

 if(fptr1 == NULL)
   {
     printf("Error al abrir el archivo original");
}

fptr2 = fopen("archivo2.txt","w");

 fscanf(fptr1,"%c %c", &c1, &c2);
 fprintf(fptr2, "%c %c",c1, c2);

fclose(fptr1);
fclose(fptr2);


return 0;
}

