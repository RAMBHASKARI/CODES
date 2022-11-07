// pointer arithmetic : pointer can be incremented & decremented
// case 1 
// int agw =22;
// int *ptr =&age;
//ptr++;

#include<stdio.h>

int main(){
    int age =21;
    int *ptr =&age;
    printf("ptr = %u",ptr);
    ptr++;
    printf("ptr = %u",ptr);
    return 0;
}

#include<stdio.h>

int main(){
    float price = 100.0;
    float *ptr =&price;
    printf("ptr = %u\n", ptr);
    ptr ++;
    printf("ptr = %u\n",ptr);
    ptr--;    
    printf("ptr = %u",ptr);
    return 0;
}