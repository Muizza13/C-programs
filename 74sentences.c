#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = NULL;
    char c;
    int n=1;
    fp=fopen("1st.txt", "r");
    if(fp==NULL){
        printf("The file is empty");
        exit(1);
    }
    while((c=fgetc(fp))!= EOF){
        if(c=='\n'){
            n=n+1;
        }
    }
    fclose(fp);
    printf("The number of lines in the file are %d", n);
    return 0;

} 