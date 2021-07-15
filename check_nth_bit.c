//WAP to check given bit is set or clear

#include<stdio.h>
int main()
{
	int data,bit;
	printf("Enter data");
	scanf("%d",&data);
	printf("Enter a bit for checking");
	scanf("%d",&bit);
	if((data>>bit)&1)
        printf(" given bit is set");
	else
	printf(" given bit is clear");
}

