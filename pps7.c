
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    int r1;
    int r2;
    int d;
    printf("Enter the coefficients :");
    scanf("%d %d %d",&a,&b,&c);
    d = sqrt(((b*b)-(4*a*c)));
    r1 = (d-b)/2*a;
    r2 = (d+b)/2*a;
    if(d>0){
         printf("It is distinct roots.\n Roots are %d,%d",r1,r2);  
    }
    else if(d==0){
         printf("It is equal roots.\n Roots are %d,%d",r1,r2);  
    }
    else{
         printf("It is imaginary roots");  
    }
    return 0;
}

