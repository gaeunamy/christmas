#include <stdio.h>
int main(void)
{
	int i,j,k;
	for(i=0;i<=3;i++)
	{
		for(k=0;k<=35-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<i*2-1;j++)
		{
			printf("*");
		}printf("\n");
	}
	for(i=0;i<=5;i++)
		{
		for(k=0;k<=34-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<i*2+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<=7;i++)
	{
		for(k=0;k<=34-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<i*2+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\t\t\t  * Merry Christmas *\n");
	printf("\n");

	printf("\n");
	printf("\n");

	return 0;
}
