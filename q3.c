#include<stdio.h>
#include<stdlib.h>
int Max(int *arr)
{
int max=arr[0];
int i;
for(i=0;i<5;i++)
{
if(arr[i]>max)
max=arr[i];
}
return max;
}
int main()
{
int *p=(int *)malloc(5*sizeof(int));
printf("enter the numbers\n");
for(int i=0;i<5;i++)
{
scanf("%d",&p[i]);
}
printf("%d",Max(p));
}