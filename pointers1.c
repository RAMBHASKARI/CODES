// write a function to caliculate the sum,product& avarage of 2 number . print the average in the main function
#include<stdio.h>
void dowork(int a,int b);
int mian (){
    int a=3,b=5;
    int sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
    printf("sum = %d, prod = %d, avg = %d\n",sum,prod,avg);
    return 0;
}

void dowork( int a,int b,int *sum,int * prod, int *age){
    *sum =a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}