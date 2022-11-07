// arrays: collection of similar data type stored at contiguous memory locations.
//#include<stdio.h>
//int main (){
//int marks[] = {99,98,97};
//return 0;
//}


#include<stdio.h>
int main(){
    int marks[5];
     printf("Enter the phys:");
     scanf("%d",&marks[0]);

     printf("Enter the chem:");
     scanf("%d",&marks[1]);

     printf("Enter the math:");
     scanf("%d",&marks[2]);

     printf("Enter the BEE:");
     scanf("%d",&marks[3]);

     printf("Enter the AP:");
     scanf("%d",&marks[4]);

     printf("phy= %d,chem = %d,math= %d,BEE= %d,AP= %d", marks[0], marks[1], marks[2], marks[3], marks[4]);

     return 0;
}