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
p->next=list; /*����һ��ѭ������*/

p=list;
for(i=1;i<=n+1;i++)
{
printf("%d ",p->data);
p=p->next;
}
printf("\n"); /*��ӡ����,�����ѭ�������ǲ�������ȷ*/
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
printf("input the lenth n\n");/*n,k,m�ֱ�����ܵ���������һ���������ˣ����������*/
scanf("%d",&x);
//printf("input the start k\n");
//scanf("%d",&y);
printf("input the m\n");
scanf("%d",&z);
JOSEPHU(x,z);
}