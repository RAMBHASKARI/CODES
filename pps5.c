#include<stdio.h>
int main (){
    int t1=0,t2=1,a,n;
    a=t1+t2;
    printf("Enter the no.of terms of the sequence:");
    scanf("%d",&n);
     printf("o,1");
     for (int i=3;i<=n;++i){
        printf("%d",a);
        t1=t2;
        t2=a;
        a=t1+t2;
     }
     return 0;
}