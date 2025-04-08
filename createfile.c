#include <stdio.h>
#include <string.h>

int main(void){

    FILE *fptr;
    char a;
    char b;
    char content[1000];

    //fptr = fopen("D:\\cmc\\Cosolaptrinh\\projectC\\filehandling\\data.txt","r");
    fptr = fopen(".\\data\\test.txt","r");
    

    if(fptr != NULL){
        printf("Truy cap file thanh cong! \n");
        
        int i = 0;
        content[0] = fgetc(fptr);

        while(!feof(fptr)){
            i++; 
            content[i] = fgetc(fptr);
            // a = fgetc(fptr);
            // printf("%c \t", a);
                       
        }
        
    }
    else {
        printf("File khong ton tai!\n");

    }
    
    fclose(fptr);
    content[strcspn(content,"\n")] = '\0';

    printf("Du lieu doc duoc: %s \n",content);


    return 0;
}