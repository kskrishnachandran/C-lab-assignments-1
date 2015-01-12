#include<stdio.h>
int main()
{
 int a[5],i,temp,j;
 printf("Enter any five numbers ");
 for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
 for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
    {
     if(a[i]>a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
  }
 printf("\n\nThe array after sorting is\n\n");
 for(i=0;i<5;i++)
  {
   printf("%d\t",a[i]);
  } 
 return 0;
} 
