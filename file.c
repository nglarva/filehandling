#include <stdio.h>
#include <string.h>

int main(void){
    FILE * fptr = NULL;
    char content[100];
    char lines_data[10][1000];
   // fopen("D:\\cmc\\Cosolaptrinh\\projectC\\filehandling\\data3.txt", "a");//Absolute Path
   printf("%p \n", fptr);
   //fptr = fopen("D:\\cmc\\Cosolaptrinh\\projectC\\test\\test_file.txt","r");
   
   fptr = fopen("..\\test\\test_file.txt","r");
   printf("%p \n", fptr);


    int i = 0;
    if(fptr == NULL){
        printf("File doesn't exist!!\n");
    }
    else {
        printf("Access to file successfully\n");
        
        while (!feof(fptr))
        {
            fgets(lines_data[i++],100,fptr);
            
        }   
    }
    fclose(fptr);
    for(int j=0;j< i;j++){
        lines_data[strcspn]
        printf("Content in line %d: %s\n",j+1,lines_data[j]);
    }
    


    return 0;
}