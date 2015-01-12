/*File Name:leap.c
  Author:K.S.Krishna Chnadran
  Description:To find the entered year is leap or not
  Date:27/08/14 */



#include<stdio.h>
int main()
{
 system("clear");
 int year;
 printf("\nEnter an year ");
 scanf("%d",&year);
 int i=(year%4==0)?1:0;
 if(i==1)
  {
   printf("\n\nIt is a leap year\n\n");
  }
 else
  {
   printf("\n\nIt  is not a leap year\n\n");
  }
 printf("\n\n");
 return 0;
}
 
