
#include<stdio.h>
int main()
{
int i,n,a[20];
printf("enter n value");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
insertion(a,n);
printf("after sorting\n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
getch();
return 1;
}
int insertion(int a[],int n)
{
int i,j,b[120];
b[1]=a[1];
for(i=2;i<=n;i++)
{
for(j=i-1;j>=1&&b[j]>a[i];j--)
{
b[j+1]=b[j];
}
b[j+1]=a[i];
}
for(i=1;i<=n;i++)
a[i]=b[i];
}