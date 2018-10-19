#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}node,*list,*p,*r;

void JOSEPHU(int n,int m)
{
int i,j;
list=NULL;
for(i=1;i<=n;i++)
{
p=(struct node*)malloc(sizeof(node));
p->data=i;
if(list==NULL)
list=p;
else
r->next=p;
r=p;
}
p->next=list; /*建立一个循环链表*/

p=list;
for(i=1;i<=n+1;i++)
{
printf("%d ",p->data);
p=p->next;
}
printf("\n"); /*打印链表,并检查循环链表是不输入正确*/
p=list;
i=1;
/*
while(p&&i<k)
{ r=p;
p=p->next;
++i;
}*/
for(i=1;i<n;i++)
{
for(j=1;j<m;j++)
{ r=p;
p=p->next;
}
printf("%d   ",p->data);
r->next=p->next;
}
}
void main()
{
int x, y, z;
printf("input the lenth n\n");/*n,k,m分别代表总的人数，第一个报数的人，间隔的人数*/
scanf("%d",&x);
//printf("input the start k\n");
//scanf("%d",&y);
printf("input the m\n");
scanf("%d",&z);
JOSEPHU(x,z);
}