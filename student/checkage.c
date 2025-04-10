#include <stdio.h>
#include<string.h>

struct Student {
    int id;
    char name[50];
    float diem;
};

int main(){
    FILE * fptr;
    struct Student s1={1,"Hung",5.7},s2;
    


    fptr = fopen("info.txt","w");
    fseek(fptr,0,SEEK_SET);
    fwrite(&s1,sizeof(struct Student),1,fptr);
    fclose(fptr);
    
    fptr = fopen("info.txt","r");
    int size = fread(&s2,sizeof(s2),1,fptr);
    printf("Size: %d",size);
    printf("%d %s %f",s2.id,s2.name,s2.diem);
    fclose(fptr);
//     if(fptr != NULL){
//        // fscanf(fptr,"%[^\n]s",name);
//        //fgets(name,50,fptr);
       
        
//     while(fgets(name,50,fptr)){
//         name[strcspn(name,"\n")]= '\0';
//         fscanf(fptr,"%d", &age);
//         // fscanf(fptr,"%s", space);
        
//     }
//     fclose(fptr);
//     fptr = fopen("info.txt","a");

//     if(age>18){
//         printf("%s tren 18 tuoi %d tuoi\n", name,age);
//         fprintf(fptr,"%s", "Cho phep\n");
//     }
//     else{
//         printf("%s duoi 18 tuoi %d tuoi\n", name,age);
//         fprintf(fptr,"%s", "Tu choi\n");
//     }
//     fclose(fptr);

// }


    return 0;
}