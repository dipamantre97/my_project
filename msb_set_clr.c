#include<stdio.h>
int main()
{
	int data,bit=7;
	printf("enter data");
	scanf("%d",&data);
	if((data>>bit)&1)
		printf("bit is set");
	else
		printf("bit is clr");
}

