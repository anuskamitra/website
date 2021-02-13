#include<stdio.h>
void main()
{

int i,pos,n;
int a[100];
printf("enter the no. of elements" );
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position from where you want to delete");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
  a[i]=a[i+1];
printf("the array is:");
for(i=0;i<n-1;i++)
printf("%d ",a[i]);
}