#include<stdio.h>

int main (){
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    if(age>18){
        printf("adult\n");
        printf("they can drvie\n");
        printf("they can vote\n");
    }
    else{
        printf("not adult\n");
    }
    printf("thank you");
    return 0;
}   