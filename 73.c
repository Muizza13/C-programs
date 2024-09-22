#include<stdio.h>
int main(){
    int x;
    char y[100];
    FILE *p;
    p=fopen("first.txt", "r");
    if(p==NULL){
        printf("The file does not exist.");
    }
    else{
        fscanf(p, "%d %s", &x, &y);
        printf("%d %s", x,y);
        fclose(p);
    }
}