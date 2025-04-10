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
    // Write to file with fputc
    fptr = fopen("data.txt", "w+");

    if (fptr != NULL)
    {
        /*Cách 1*/
        /*
            for(int i = 0; i < strlen(Ten);i++){
            fputc(Ten[i],fptr);
        }
        fputc('\n', fptr);
        */
       /*Cách 2*/
        // fputs(Ten, fptr);
        // fputc('\n', fptr);
        //rewind(fptr);
        //fwrite(Ten,1,sizeof(Ten),fptr);
        // Tạo mảng character để lưu dữ liệu cần chuyển đổi thành string
        // Cách 3
        //char tmp[50];
        //sprintf(tmp, "%d", year);

        //fputs(tmp, fptr);
        //fputc('\n', fptr );
        fprintf(fptr,"%s\n",Ten);
        fprintf(fptr,"%d\n",year);

        // char ff[50];
        // sprintf(ff, "%f", weight);
  
        // fputs(ff, fptr );
        fprintf(fptr,"%.2f",weight);
       
        


        // for (int i = 0; i < strlen(ff); i++)
        // {
        //     fputc(ff[i], fptr);
        // }

        //printf("Size: %d\n", strlen(tmp));
    }

    fclose(fptr);
    return 0;
}