#include<stdio.h>
int fact(int num)
{

	if(num==0||num==1)
		return 1;
	else
		return(num*fact(num-1));

}
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	printf("fact=%d",fact(n));
}
