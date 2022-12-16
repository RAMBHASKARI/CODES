
#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
int data;
struct node *next,*prev;
}*head,*last,*newn,*trav;
//----------------------------------------------------
void create_list()
{
struct node *temp;
int value;
temp=last;
newn=(struct node *)malloc(sizeof (struct node));
printf("\n enter value");
scanf("%d",&value);
newn->data=value;
if(last==NULL)
{
head=last=newn;
head->prev=NULL;
head->next=NULL;
count++;
}
else
{
newn->next=NULL;
newn->prev=last;
last->next=newn;
last=newn;
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
head=last=newn;
head->prev=NULL;
head->next=NULL;
count++;
}
else
{
newn->next=head;
head->prev=newn;
newn->prev=NULL;
head=newn;
count++;
}
}
//----------------------------------------------------------
void insert_at_end(int value)
{
struct node *temp;
temp=last;
newn=(struct node *)malloc(sizeof (struct node));
newn->data=value;
if(last==NULL)
{
head=last=newn;
head->prev=NULL;
head->next=NULL;
count++;
}
else
{
newn->next=NULL;
newn->prev=last;
last->next=newn;
last=newn;
count++;
}
}
//------------------------------------------------------
int insert_at_middle()
{
if(count>=2)
{
struct node *var2,*temp;
int loc,value;
printf("\nselect location where you want to insert the data");
scanf("%d",&loc);
printf("\nenter which value do u want to inserted");
scanf("%d",&value);
newn=(struct node *)malloc(sizeof (struct node));
newn->data=value;
temp=head;
while(temp->data!=loc)
{
temp=temp->next;
if(temp==NULL)
{
printf("\nSORRY...there is no %d element",loc);
return 0;
}
}
if(temp->next==NULL)
{
printf("\n%d is last node..please enter midddle node values ",loc) ;
return 0;
}
var2=temp->next;
temp->next=newn;
newn->next=var2;
newn->prev=temp;
var2->prev=newn;
count++;
}
else
{
printf("\nthe no of nodes must be >=2");
}
}
//----------------------------------------------------------------
int delete_from_middle()
{
if(count>2)
{
struct node *temp,*var;
int value;
temp=head;
printf("\nenter the data that you want to delete from the list shown above");
scanf("%d",&value);
while(temp!=NULL)
{
if(temp->data == value)
{
if(temp->next==NULL)//if(temp==head)
{
printf("\n\n sorry %d is last node ..please enter middle nodes only",value);
return 0;
}
else
{
if(temp==head)
{
printf("\n\n %d is first node..plz enter middle nodes",value);
return 0;

}
var->next=temp->next;
temp->next->prev=var;
free(temp);
count--;
return 0;
}
}
else
{
var=temp;
temp=temp->next;
}
}
if(temp==NULL)
printf("\n%d is not avilable.. enter only middle elements..",value);
else
printf("\ndata deleted from list is %d",value);
}
else
{
printf("\nthere no middle elemts..only %d elemts is avilable",count);
}
}
//------------------------------------------------------------------
int delete_from_front()
{
struct node *temp;
if(head==NULL)
{
printf("no elements for deletion in the list");
return 0;
}
else if(head->next==NULL)
{
printf("deleted element is :%d",head->data);
head=last=NULL;

}
else
{
temp=head->next;
printf("deleted element is :%d",head->data);
head->next=NULL;
temp->prev=NULL;
head=temp;
count--;
return 0;
}
}
//--------------------------------------------------------
int delete_from_end()
{
struct node *temp,*var;
temp=last;
if(last==NULL)
{
printf("no elemts in the list");
return 0;
}
else if(last->prev==NULL)
{
printf("data deleted from list is %d",last->data);
head=last=NULL;
//free(last);
count--;
return 0;
}
else{
printf("data deleted from list is %d",last->data);
var=last->prev;
last->prev->next=NULL;
last=var;
count--;
return 0;
}
}
//------------------------------------------------------
int display()
{
trav=last;//head;
if(trav==NULL)
{
printf("\nList is Empty");
return 0;
}
else
{
printf("\n\nElements in the List is %d:\n",count);
while(trav!=NULL)
{
printf("%d<--> ",trav->data);
trav=trav->prev;//next;
}
printf("\n");
}
}
//---------------------------------------------------------------
int main()
{
int ch=0;
char ch1;
// clrscr();
head=NULL;
last=NULL;
while(1){
printf("\n Double Linked List Operations");
printf("\n1.Create Double Linked List");
printf("\n2.insertion at begning of linked list");
printf("\n3.insertion at the end of linked list");
printf("\n4.insertion at the middle where you want");
printf("\n5.deletion from the front of linked list");
printf("\n6.deletion from the end of linked list ");
printf("\n7.deletion of the middle data that you want");
printf("\n8.display");
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
case 8:display();break;
case 9:
{
exit(0);
}
}
}
}