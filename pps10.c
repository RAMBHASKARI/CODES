#include<stdio.h>

int main (){
    int n,r=0;
    printf("How many number do you want to enter :");
    scanf("%d",&n);

    int a[n];
    printf("Enter number :");
    for (int i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
    int *p = &a;
    for (int i=0; i<n; i++){
        r = r + *p;
        p++;
    }
    printf("%d",r);
    return 0;
}