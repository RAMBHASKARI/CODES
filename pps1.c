#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    {
        printf("%dis maximum",a);
    }
    else if (b>a&&b>c)
    {
        printf("%d is maximum",b);
    }
    else{
        printf("%d is maximum",c);
    }
    return 0;
}
