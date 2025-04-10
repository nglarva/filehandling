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
    fptr = fopen("data.txt", "w");

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
        fputs(Ten, fptr);
        fputc('\n', fptr);
    
        // Tạo mảng character để lưu dữ liệu cần chuyển đổi thành string
        char tmp[50];
        sprintf(tmp, "%d", year);

        char ff[50];
        sprintf(ff, "%f", weight);

        for (int i = 0; i < strlen(tmp); i++)
        {
            fputc(tmp[i], fptr);
        }
        fputc('\n', fptr);

        for (int i = 0; i < strlen(ff); i++)
        {
            fputc(ff[i], fptr);
        }

        printf("Size: %d\n", strlen(tmp));
    }

    fclose(fptr);
    return 0;
}