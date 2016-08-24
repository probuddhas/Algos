//Program to oscillate a string over the display unit. Please use Turbo C for this program

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int i;
	for(i=1;i<=50&&(!kbhit());i++)
	{
		gotoxy(i,1);
		printf("GIT");
		delay(100);
		clrscr();
		if(i==50)
		{
			for(i=50;i>=1&&(!kbhit());i--)
			{
				gotoxy(i,1);
				printf("GIT");
				delay(100);
				clrscr();
			}
		}
	}
	clrscr();
}
