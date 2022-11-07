// ARRAYS AS FUCTIONS ARGUMENT 
//Function declearation 
//void printnumber (int arr[],int n)
//void printnumber(int*arr,int n)
// FUNCTION CELL
// printnumber(arr,n);

#include<stdio.h>
void printNumbres(int arr[],int n);

int main (){
    int arr[]= {1,2,3,4,5,6,};
    printNumbres(arr,6);
    return 0;
}

void printNumbers(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}