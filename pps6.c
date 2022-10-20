#include<stdio.h>
int main (){
    int n,r,s=0,t=0,c;
    printf("Enter any number:");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r = n%10;
        t = t +r;
        s = s*10 +r;
        n = n/10;
    }
    if(s==c){
        printf("The sum of digits is %d\n%d is a palindrome number",t,s);
    }
    else{
        printf("The sum of digits is %d\n%d is not a palindrome number",t,c);
    }
    return 0;
}