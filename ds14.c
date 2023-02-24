
#include <stdio.h>
int stack[5],top=-1,known[10],n,a[10][10];
void push(int val){
stack[++top]=val;
}
int pop(){
int ver=stack[top--];
printf("%d-> ",ver);
return ver;
}
int stackempty(){
if(top==-1)
return 1;
else
return 0;
}
void dfs(int sv){
push(sv);
known[sv]=1;
while(!stackempty()){
int i;
int v=pop();
for(i=n;i>0;i--){
if(!(!(a[v][i]))&&!(known[i])){
push(i);
known[i]=1;
}
}
}
}
int main(void) {
// your code goes here
int i,j,sv;
printf("\nEnter number of vertices");
scanf("%d",&n);
printf("\n enter %d elements into adjcency matrix",n*n);
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
scanf("%d",&a[i][j]);
}
}
printf("\n enter Start vertex");
scanf("%d",&sv);

dfs(sv);
return 0;
}