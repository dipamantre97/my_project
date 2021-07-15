
// WAP to convert from decimal to binary

#include<stdio.h>
int main()
{
 int data ,bit;
 printf("Enter data");
 scanf("%d",&data);
 bit=7;
 while(bit>=0)
 
 {
	 printf("%d",(data>>bit)&1);
	 bit--;
 }
 return 0;
}

