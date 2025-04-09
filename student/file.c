#include <stdio.h>
#include <string.h>
int main(){
    FILE * fptr;
    fpos_t pos;
    int age;
    char name[50];
    char diachi[50];

    char content[100];

//     fptr = fopen("info.txt","w");


//    /* fprintf(fptr,"%s","Do Hoang Long\n");
    
//     fprintf(fptr,"%d\n",2006);*/
    
//         //scanf("%s", name);
//         printf("Ten: ");
//         scanf("%[^\n]s", name);
//        // name[strcspn(name,"\n")] = '\0';
//         printf("Tuoi: ");
//         scanf("%d %s", &age,diachi);
//        // printf("Dia chi: ");

//         //scanf("%[^\n]s", diachi);
//         //diachi[strcspn(diachi,"\n")] = '\0';
//         //scanf("%s", diachi);

//         fprintf(fptr,"Ten %s\n", name);
//         fprintf(fptr,"Tuoi %d\n", age);
//         fprintf(fptr,"Diachi %s\n", diachi);

    

//     fclose(fptr);

    fptr = fopen("info.txt", "r");
    if(fptr == NULL){
        printf("File khong ton tai");
    } else {
        while (fgets(content,100,fptr) != NULL)
        {
            printf("%s", content);
        }
    }
    fclose(fptr);


    


    return 0;
}