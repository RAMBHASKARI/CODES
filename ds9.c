
#include<stdio.h>
#include<conio.h>
void selectionsort(int a[],int n);
int main()
{
int a[20],i,n;

printf("enter how many values you want");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selectionsort(a,n);
printf("after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
return 1;
}
void selectionsort(int a[],int n)
{
int min,i,j,t;
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
}