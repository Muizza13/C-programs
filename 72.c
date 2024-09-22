#include<stdio.h>
int main(){
    FILE *p;
    int rollno = 22;
    char name[50]= "Muizza";
    
    p=fopen("first.txt", "w");
    if (p == NULL){
        printf("Error opening file. \n");
        return 1;
    }
    fprintf(p, "%d %s", rollno, name);
    fclose(p);
    printf("Data written on file successfully.\n");
}