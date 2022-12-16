
#include<stdio.h>
#include<stdlib.h>
#define max 5
int st[max],top=-1;
void push()
{
int x;
if(top==max-1)
{
printf("stack is full");
return;
}
printf("enter element");
scanf("%d",&x);
top++;
st[top]=x;
}
void pop()
{
int x;
if(top==-1)
{
printf("stack is empty");
return;
}
printf("enter element");
scanf("%d",&x);
top--;
printf("enter deleted element=%d",x);
}
void display()
{
int i;
if(top==-1)
{
printf("stack is empty");
return;}
for(i=top;i>=0;i--)
{
printf("%d",st[i]);
}}
int main()
{
int ch;
while(1)
{
printf("enter \n1.push\n2.pop\n3.display\n4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:push();break;
case 2:pop();break;
case 3:display();break;
case 4:exit(1);break;
}}
return 1;
}