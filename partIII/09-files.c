#include<stdio.h>

int main(){
  FILE * fptr;
  char cr;

  fptr = fopen("09-files.txt","r");
  cr = fgetc(fptr);
  printf("El caracter del archivo es...%c\n", cr);
  fclose(fptr);



  return 0;
}
