/*File Name:grade.c
  Author:K.S.Krishna Chandran
  Description:To find the grade for the student
  dtae:22/08/14*/


#include<stdio.h>
int main()
{
 system("clear");
 int m1,m2,m3,m4,total;
 int avg;
 printf("\nEnter the marks for 4 subject(MAX. 100 for each)");
 scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
 total=m1+m2+m3+m4;
 avg=total/4;
 printf("\nAverage of marks is= %d",avg);
 if(avg>90)
  {
   printf("\nGrade is 'A'");
  }
 else
  {
   if((avg<=90)&&(avg>=80))
    {
     printf("\nGrade is 'B'");
    }
   else
    {
     if((avg>=60)&&(avg<=79))
      {
       printf("\nGrade is 'C'");
      }
     else
      {
       if((avg>=50)&&(avg<=60)) 
        {
         printf("\nGrade is 'D'");
        }
       else
        {
         if(avg<50)
          {
           printf("\nGrade is 'F'");
          }
        }
      }
    }
  }
 printf("\n\n");
 return 0;
}
      
