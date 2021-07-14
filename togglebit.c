#include<stdio.h>
int main()
{

int data,bit,result;
printf("enter data");
scanf("%d",&data);
printf("enter nth bit to toggle");
scanf("%d",&bit);
result=data^(1<<bit);
printf("%d",result);




}
