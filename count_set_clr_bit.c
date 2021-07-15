// WAP to count set bit & clear bit in given data
#include<stdio.h>
int main()
{
	int data,bit,setbit=0,clrbit=0;
	printf("enter data");
	scanf("%d",&data);
	bit=7;
	while(bit>=0)
	{
		if((data>>bit)&1)
		{
			setbit++;
		}

	         else
		 {
			 clrbit++;
		 }
	bit--;
	}
	printf("no of set bit=%d,clrbit=%d",setbit,clrbit);
}

