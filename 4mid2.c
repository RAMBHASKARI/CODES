#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*p;
    p=fopen ("one.txt","r");
    if(p==NULL){
        printf("file doesn't exit");
        exit(0);
    }
    char c=fgetc(p);
    while(c!=EOF){
     printf("%c",c);
     c=fgetc(p);
    }
    fclose(p);
    return 0;
}