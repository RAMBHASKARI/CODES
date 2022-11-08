#include<stdio.h>

int main(){
    int a [10]= {1,2,3,4,5,6,7,8,9,100};
    int n,low=0, high =10, result=a [0], middle ;
    middle = (low + high )/2 ;
    printf("Enter the number you search :");
    scanf("%d,&n");
    while (low<=high){
        if (n>a[middle]){
            low = middle+1;
        }
    }
    else if (n<=high){
        high = middle-1;
    }
    ,.else {
        printf("%d is found ",n );
        break;
    }
        middle =(low + high)/2;
    if (low>high){
        printf("%d is not found ", n);
    }
    return 0;
}