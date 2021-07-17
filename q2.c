
#include<stdio.h>
struct student
{int rno;
char* name[100];
int mark[3];
float percentage;
float total;
float cgpa;

}s[100];

int calc(struct student st )
{
    int i;
    s[i].total=s[i].mark[0]+s[i].mark[1]+s[i].mark[2];
printf("the total is %f \n",s[i].total);
s[i].percentage=(s[i].total/300)*100;
printf("the percentage is %f \n",s[i].percentage);

s[i].cgpa=(s[i].percentage/9.5);
printf("the cgpa is %f",s[i].cgpa);
}

int main()
{
int i,j,n;

struct student st;
printf("how many students - ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the student details\n");
printf("enter name - ");
scanf("%s",s[i].name);
printf("enter roll no.");
scanf("%d",&s[i].rno);
printf("enter marks sub 1 -");
scanf("%d",&s[i].mark[0]);
printf("enter marks of sub 2 -");
scanf("%d",&s[i].mark[1]);
printf("enter marks of sub 3 -");
scanf("%d",&s[i].mark[2]);
}

calc(st);

return 0;
}
