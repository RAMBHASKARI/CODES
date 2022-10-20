#include<stdio.h>

int main(){
    int marks;
    printf("enter the marks :");
    scanf("%d", &marks);

    if (marks <=40 ){
        printf("\n Failed ");
    }
    else if ( marks > 40 && marks <60){
        printf("\n Second class");
    }
    else if (marks  >60 && marks<70){
            printf("\n First  class");
    }
    else if(marks >=70){
        printf("\n Distinction");
    }
    else{
        printf("\nEnter appropriate marks");
    }
    return 0;
}
