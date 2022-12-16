
#include<stdio.h>

#include<stdlib.h>
int count=0;
struct node
{
int data;
struct node *next;
}*head,*newn,*trav;
//----------------------------------------------------------
void create_list()
{
int value;
struct node *temp;
temp=head;
newn=(struct node *)malloc(sizeof (struct node));
printf("\nenter the value to be inserted");
scanf("%d",&value);
newn->data=value;
if(head==NULL)
{
head=newn;
head->next=NULL;
count++;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
newn->next=NULL;
count++;
}
}
//----------------------------------------------------
void insert_at_begning(int value)
{
newn=(struct node *)malloc(sizeof (struct node));
newn->data=value;
if(head==NULL)
{
head=newn;
head->next=NULL;
count++;
}
else
{
newn->next=head;
head=newn;
count++;
}
}
//----------------------------------------------------------
void insert_at_end(int value)
{
struct node *temp;
temp=head;
newn=(struct node *)malloc(sizeof (struct node));
newn->data=value;
if(head==NULL)
{
head=newn;
head->next=NULL;
count++;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newn;
newn->next=NULL;
count++;
}
}
//------------------------------------------------------
int insert_at_middle()
{
if(count>=2)
{
struct node *var1,*temp;
int loc,value;
printf("\n after which value you want to insert : ");
scanf("%d",&loc);
printf("\nenter the value to be inserted");
scanf("%d",&value);
newn=(struct node *)malloc(sizeof (struct node));
newn->data=value;
temp=head;

/* if(head==NULL)
{
head=newn;
head->next=NULL;
count++;
return 0;
}
else
{*/
while(temp->data!=loc)
{
temp=temp->next;
if(temp==NULL)
{
printf("\nSORRY...there is no %d element",loc);
return 0;
}
}
//var1=temp->next;
newn->next=temp->next;//var1;
temp->next=newn;

count++;
//}
}
else
{
printf("\nthe no of nodes must be >=2");
}
}
//----------------------------------------------------------------
int delete_from_middle()
{
if(count==0)
printf("\n List is Empty!!!! you can't delete elements\n");
else if(count>2)
{
struct node *temp,*var;
int value;
temp=head;
printf("\nenter the data that you want to delete from the list shown above");
scanf("%d",&value);
while(temp->data!=value)
{
var=temp;
temp=temp->next;
if(temp==NULL)
{
printf("\nSORRY...there is no %d element",value);
return 0;
}
}
if(temp==head)
{
head=temp->next;

}
else{
var->next=temp->next;
temp->next=NULL;

}
count--;
if(temp==NULL)
printf("Element is not avilable in the list \n**enter only middle elements..**");
else
printf("\ndata deleted from list is %d",value);
free(temp);
}
else
{
printf("\nthere no middle elemts..only %d elemts is avilable\n",count);
}
}
//------------------------------------------------------------------
int delete_from_front()
{
struct node *temp;
temp=head;
if(head==NULL)
{
printf("\nno elements for deletion in the list\n");
return 0;
}
else
{
printf("\ndeleted element is :%d",head->data);
if(temp->next==NULL)
{
head=NULL;
}
else{
head=temp->next;
temp->next=NULL;

}
count--;
free(temp);

}
}
//--------------------------------------------------------
int delete_from_end()
{
struct node *temp,*var;
temp=head;
if(head==NULL)
{
printf("\nno elemts in the list");
return 0;
}
else{
if(temp->next==NULL )
{
head=NULL;//temp->next;
}
else{
while(temp->next != NULL)
{
var=temp;
temp=temp->next;
}
var->next=NULL;
}
printf("\ndata deleted from list is %d",temp->data);
free(temp);
count--;
}
return 0;
}
//------------------------------------------------------
int display()
{
trav=head;
if(trav==NULL)
{
printf("\nList is Empty\n");
return 0;
}
else
{
printf("\n\nElements in the Single Linked List is %d:\n",count);
while(trav!=NULL)
{
printf(" -> %d ",trav->data);
trav=trav->next;
}
printf("\n");
}
}
//---------------------------------------------------------------
int main()
{
int ch=0;
char ch1;

head=NULL;
while(1)
{
printf("\n1.create linked list");
printf("\n2.insertion at begning of linked list");
printf("\n3.insertion at the end of linked list");
printf("\n4.insertion at the middle where you want");
printf("\n5.deletion from the front of linked list");
printf("\n6.deletion from the end of linked list ");
printf("\n7.deletion of the middle data that you want");
printf("\n8.display the linked list");
printf("\n9.exit\n");
printf("\nenter the choice of operation to perform on linked list");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
do{
create_list();
display();
printf("do you want to create list ,y / n");
getchar();
scanf("%c",&ch1);
}while(ch1=='y');

break;
}
case 2:
{
int value;
printf("\nenter the value to be inserted");
scanf("%d",&value);
insert_at_begning(value);
display();
break;
}
case 3:
{
int value;
printf("\nenter value to be inserted");
scanf("%d",&value);
insert_at_end(value);
display();
break;
}
case 4:
{
insert_at_middle();
display();
break;
}
case 5:
{
delete_from_front();
display();
}break;
case 6:
{
delete_from_end();
display();
break;
}
case 7:
{
display();
delete_from_middle();
display();
break;
}
case 8:
{
display();
break;
}
case 9:
{
exit(1);
}
default:printf("\n****Please enter correct choice****\n");
}
}

}