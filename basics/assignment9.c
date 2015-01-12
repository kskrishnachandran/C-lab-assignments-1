/*File Name:age.c
  Author:K.S.Krishna Chandran
  Description:To find the youngest among three persons
  Date:25\08\14*/



#include<stdio.h>
int main()
{ 
 system("clear");
 int ram;
 int shyam;
 int ajay;
 printf("\nEnter the age for Ram ");
 scanf("%d",&ram);
 printf("\nEnter the age for Shyam ");
 scanf("%d",&shyam);
 printf("\nEnter the age for Ajay ");
 scanf("%d",&ajay);
 if((ram<shyam)&&(ram<ajay))
  {
   printf("\n\nRam is youngest among the three");
  }
 else
  {
   if(shyam<ajay)
    {
     printf("\n\nShyam is youngest among the three");
    }
   else
    {
     printf("\n\nAjay is youngest among the three");
    }
  }
 printf("\n\n");
 return 0;
} 
