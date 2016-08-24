#include<stdio.h>
#include<conio.h>
int small(int [],int,int);
void sort(int [],int);
int main()
{
     int arr[25],n,i;
     printf("Enter no of elements ");
     scanf("%d",&n);
     printf("Enter the array ");
     for(i=0;i<n;i++)
     {
                      scanf("%d",&arr[i]);
     }
     sort(arr,n);
     printf("\nSorted array is ");
     for(i=0;i<n;i++)
     {
                     printf("%d ",arr[i]);
     }
     
     getch();
}

int small(int arr[],int n,int k)
{
     int j=k,i,small=arr[k];
     for(i=k+1;i<n;i++)
     {
                     if(arr[i]<small)
                     {
                                     small=arr[i];
                                     j=i;
                     }
     }
     return j;
}

void sort(int arr[],int n)
{
     int s,i,temp;
     for(i=0;i<n-1;i++)
     {
                     s=small(arr,n,i);
                     temp=arr[i];
                     arr[i]=arr[s];
                     arr[s]=temp;
     }
}
