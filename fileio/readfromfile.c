#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fptr;
    fptr = fopen("data.txt","r");
    char name[30];
    char year[10];
    int i=0;
    rewind(fptr);
    if(fptr != NULL){
       // do {
            // name[i] = fgetc(fptr);
            // printf("%c", name[i]);
            // if(name[i] == '\n'){
            //     name[i] = '\0';
            //     break;
            // }
            // i++;
            fgets(name,50,fptr);
            fgets(year,50,fptr);
            
        // }
        // while(name[i-1] != EOF);
        //name[i] = '\0';
        printf("Ten: %s\n",name);
        printf("Nam sinh: %s\n",year);
    }
    else{
        printf("File khong ton tai\n");
    }
    fclose(fptr);

    return 0;
}