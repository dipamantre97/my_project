#include<stdio.h>
int main()
{
int data,bit,result;
printf("enter data\n");
scanf("%d",&data);
printf("enter nth bit for clear");
scanf("%d",&bit);
result=data & (~(1<<bit));
printf("%d",result);
}







