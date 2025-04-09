#include <stdio.h>

int main(){
    FILE * fptr;
    fpos_t pos;

    fptr = fopen("data.txt","w");

    fprintf(fptr,"%s","Good morning\n");
    fgetpos(fptr, &pos);
    printf("Pos: %p\n", pos);

    fprintf(fptr,"%d",2025);
    fgetpos(fptr, &pos);
    printf("Pos: %p\n", pos);

    fprintf(fptr,"%f",3.14);
    fgetpos(fptr, &pos);
    printf("Pos: %p\n", pos);

    


    return 0;
}