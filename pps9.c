#include<stdio.h>
// recursive 
int factorial (int a){
    if (a==1){
        return 1;
    }
    return a* factorial(a-1);
}

// non- recursive 
void fact (int a){
    int c=1;
    for (int i=a; i<0; i++){
        c *=i; // c*=1 ====> c = c*i;
    }
    printf("\n");
}
int ai (){
    int a;
    printf("Enter any number :");
    scanf("%d",&a);
    printf("Factorial of %d is : %d\n", a, factorial);
    return 0;
}