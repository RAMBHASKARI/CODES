#include<stdio.h>
int main (){
    int a,b;
    char operand;
    printf("Enter which opertion do you want to");
    scanf("%c",&operand);
    printf("Enter the numbers :");
    scanf("%d %d",&a ,&b);
    switch(operand){
        case '+': printf("result=%d",a+b);
        break;
        case '-': printf("result=%d",a-b);
        break;
        case'*': printf("result=%d",a*b);
        break;
        case'/': printf("result=%d",a/b);
        break;
        case'%': printf("result=%d",a%b);
        break;
        default:printf("you can calculate using these +,-,/,*");
    }
    return 0;
}