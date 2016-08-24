//Program to shift a string from the right towards left & add hidden characters from left end to the right end of the string. Please use Turbo C for this program

#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
     int a,i=0,j=0;
     char str[50]="Thank you Dennis !!";
     char f;
     while(str[i]!='\0')
     {
		      i++;
     }
     str[i]=' ';
     str[++i]='\0';
     printf("%s",str);       //printf can print a string with spaces but scanf cannot input a string with spaces so we have to use gets()
     delay(400);
	     j=0;
	     f=str[j];
	     while(str[j]!='\0')
	     {
				str[j]=str[j+1];
				j++;

	     }
	     str[--i]=f;
	     str[++i]='\0';
     while(1)
     {

	     clrscr();
	     j=0;
	     f=str[j];
	     while(str[j]!='\0')
	     {
				str[j]=str[j+1];
				j++;

	     }
	     str[i-1]=f;
	     str[i]='\0';
	     printf("%s",str);
	     delay(400);
     }
     getch();
}
