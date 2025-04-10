#include <stdio.h>
#include <string.h>
int main(void){
    FILE *fptr;
    fptr = fopen("data.txt","r");
    char name[30];
    //char year[10];
    int year;
    float weight;
    //char weight[10];
    char random[10];
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
            // fgets(name,50,fptr);
            // fgets(year,50,fptr);
            // fgets(weight,50,fptr);
            fscanf(fptr,"%[^\n]",name);
            fscanf(fptr,"%d",&year);
            fscanf(fptr,"%f",&weight);

            
            
        // }
        // while(name[i-1] != EOF);
        //name[i] = '\0';
        printf("Ten: %s\n",name);
        printf("Nam sinh: %d\n",year);
        printf("Can nang: %.2f\n",weight);
        if(fgets(random,50,fptr) ==NULL)
            {
                printf("End of file");
            }
            
    }
    else{
        printf("File khong ton tai\n");
    }
    fclose(fptr);

    return 0;
}