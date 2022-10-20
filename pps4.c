#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%i ==0){
            c++;
        }
    }
    c==2  ? printf("It is a prime number\n") : printf("It is not a prime number\n");
    return 0;
}