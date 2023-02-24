
#include<stdio.h>
bubblesort(int a[],int n)
{
int temp,p,c;
for(p=1;p<=n-1;p++)
{
for(c=1;c<=n-p;c++)
{
if(a[c]>a[c+1])
{
temp=a[c];
a[c]=a[c+1];
a[c+1]=temp;
} 
} 
} 
}

int main()
{
int a[5],n,i;
printf("enter n value");
scanf("%d",&n);
printf("enter %d elements into array",n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
printf("after sauting elements are");
for(i=1;i<=n;i++)
printf("%d\t",a[i]);
return 1;
}