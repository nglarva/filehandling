#include <stdio.h>
#include <string.h>

int main()
{
    char Ten[1000];
    int year;
    float weight;
    FILE *fptr;

    scanf("%s", Ten);
    scanf("%d", &year);
    scanf("%f", &weight);

    printf("Ten la %s, %d tuoi, %.2f can\n", Ten, year, weight);
    //Write to file with fputc
    fptr = fopen("data.txt","w");

    if(fptr != NULL){
        for(int i = 0; i < strlen(Ten);i++){
            fputc(Ten[i],fptr);
        }
        fputc('\n', fptr);
        char tmp[50];
        sprintf(tmp,"%d\n",year);
        tmp[strcspn(tmp,"\n")] = '\0';

        for(int i = 0; i < strlen(tmp);i++){
            fputc(tmp[i],fptr);
        }
        fputc('\n', fptr);
        

        printf("Size: %d\n",strlen(tmp));
        fputc((char)year, fptr);
    }

    fclose(fptr);
    return 0;
}