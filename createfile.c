#include <stdio.h>
#include <string.h>

int main(void){

    FILE *fptr;
    char a;
    char b;
    char content[1000];
    char name[1000];
    char address[1000];
    int birthyear;

    //fptr = fopen("D:\\cmc\\Cosolaptrinh\\projectC\\filehandling\\data.txt","r");
    fptr = fopen("name.txt","w");

    if(fptr != NULL){
        scanf("%s", name);
        scanf("%d", &birthyear);
        scanf("%s", address);
        printf("Truy cap file thanh cong! \n");
        fprintf(fptr,"%s\n %d\n %s\n", name, birthyear, address);
        
        
    }
    else {
        printf("File khong ton tai!\n");

    }
    fclose(fptr);

    fptr = fopen(".\\name.txt","r");
    

    if(fptr != NULL){
        printf("Truy cap file thanh cong! \n");
        
        int i = 0;
        //content[0] = fgetc(fptr);

        while(fgets(content,1000,fptr) != NULL){
            printf("%s\n", content);        
        }
        
    }
    else {
        printf("File khong ton tai!\n");

    }
    
    fclose(fptr);
    //content[strcspn(content,"\n")] = '\0';

    ///printf("%s\n", content);


    return 0;
}