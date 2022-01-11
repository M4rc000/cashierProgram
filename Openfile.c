#include <stdio.h>

void main (){
char buff[255];
FILE *fptr;

// Membuka File
if ((fptr = fopen("CashierProgram.c","r")) == NULL){
    printf("ERROR : FILE NOT FOUND !!!");
    exit(1);
}

while (fgets(buff, sizeof(buff), fptr)){
printf("%s", buff);
}
// Tutup File
fclose(fptr);
}