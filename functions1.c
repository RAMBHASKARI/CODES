 #include<stdio.h>

 int sum (int a, int b);

 int main(){
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);

    int s =sum(a,b);
    printf("Sum is %d \n",s);
    return 0;
 }

 int sum (int x, int y) {
    return x+y;
 }