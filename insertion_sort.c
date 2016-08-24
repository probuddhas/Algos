#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[25],i,n,j,temp;
    printf("Enter no of elements ");
    scanf("%d",&n);
    printf("Enter array ");
    for(i=0;i<n;i++)
    {
                    scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
                     temp=arr[i];
                     j=i-1;
                     while(temp<arr[j] && j>=0)
                     {
                                       arr[j+1]=arr[j];
                                       j--;
                     }
                     arr[j+1]=temp;
    }
    printf("Sorted array is ");
    for(i=0;i<n;i++)
    {
                    printf("%d ",arr[i]);
    }
    getch();
}
