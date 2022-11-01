#include<stdio.h>
int main(){
    int list [5]={12,13,20,25,30};
    int smallest=list[0];
    int i;
    for (i=1;i<5;i++){
        if (list [i]<smallest)
             smallest=list[i];
    }
    printf("smallest number in the list is %d",smallest);
    return 0;
}