#inlude<stdio.h>
int main()
{
int data,bit,result;
printf("enter data");
scanf("%d",&data);
printf("enter nth bit to set");
scanf("%d",&bit);
result=(1<<bit)|data;
printf("%d",result);
}
