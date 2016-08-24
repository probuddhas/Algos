//another pattern printing program

#include<stdio.h>
int main()
{
	int n,c,d,i,j;
	scanf("%d",&n);
	c=n-1;
	d=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf(" ");
		}
		c--;
		for(j=1;j<=d;j++)
		{
			if(i>2)
			{
				if((j==1)||(j==d))
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			else
				printf("* ");
		}
		d++;
		printf("\n");
	}
	return 0;
}
