#include<stdio.h>
struct employee
{
int emp_id;
char name[50];
float salary;
};
int main()
{
struct employee e[3];
int i;
printf("Enter details of 3 employees:/n");
for(i=0;i<3;i++)
{
printf("\nemployee %d:\n",i+1);
printf("Enter Employee ID:");
scanf("%d",&e[i].emp_id);
printf("Enter Name:");
scanf("%s",e[i].name);
printf("Enter Salary:");
scanf("%f",&e[i].salary);
}
printf("\n---Employee Details---\n");
for(i=0;i<3;i++)
{
printf("\n employee %d\n",i+1);
printf("Employee ID:%d\n",e[i].emp_id);
printf("Name:%s\n",e[i].name);
printf("Salary:%2f\n",e[i].salary);
}
return 0;
}

