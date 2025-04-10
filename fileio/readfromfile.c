#include <stdio.h>

int main(void){
    FILE *fptr;
    fptr = fopen("data.txt","r");
    char c;
    if(fptr != NULL){
        c = fgetc(fptr);
        printf("%c\n", c);
    }
    else{
        printf("File khong ton tai\n");
    }
    fclose(fptr);

    return 0;
}