
#include<stdlib.h>
struct q
{
int no;
struct q *next;
}
*start=NULL;
void add();
int del();
void display();
void main()
{
int ch;
char choice;
while(1)
{
printf(" \n MENU \n");
printf("\n1.Insert an element in Queue\n");
printf("\n2.Delete an element from Queue\n");
printf("\n3.Display the Queue\n");
printf("\n4.Exit!\n");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:add();
break;
case 2:
printf("\nThe deleted element is=%d",del());
break;
case 3:display();
getch();
break;
case 4:exit(0);
break;
default:printf("\nYou entered wrong choice");
getch();
break;
}
}
getch();
}
void add()
{
struct q *p,*temp;
temp=start;
p=(struct q*)malloc(sizeof(struct q));
printf("\nEnter the element:");
scanf("%d",&p->no);
p->next=NULL;
if(start==NULL)
{
start=p;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=p;
}
}
int del()
{
struct q *temp;
int value;
if(start==NULL)
{
printf("\nQueue is Empty");
getch();
return(0);
}
else
{
temp=start;
value=temp->no;
start=start->next;
free(temp);
}
return(value);
}
void display()
{
struct q *temp;
temp=start;
if(temp==NULL)
printf("queue is empty");
else
{
while(temp->next!=NULL)
{
printf("\nno=%d",temp->no);
temp=temp->next;
}
printf("\nno=%d",temp->no);
}
getch();
}
