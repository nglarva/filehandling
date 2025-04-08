#include <stdio.h>

int main(void){
    FILE * fptr = NULL;
   // fopen("D:\\cmc\\Cosolaptrinh\\projectC\\filehandling\\data3.txt", "a");//Absolute Path
   printf("%p \n", fptr);
   //fptr = fopen("D:\\cmc\\Cosolaptrinh\\projectC\\test\\test_file.txt","r");
   fptr = fopen("..\\test\\test_file.txt","r");
   printf("%p \n", fptr);


    if(fptr == NULL){
        printf("File doesn't exist!!");
    }
    else {
        printf("Access to file successfully");
    }


    return 0;
}