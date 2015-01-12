/*File Name:rainbow.c
Author:K.S.Krishna Chandran
Description:To print a color according to its corresponding color color
Date:22/08/14
 */

#include<stdio.h>
int main()
{
	system("clear");
	char color;
	printf("1.Violet\n2.Indigo\n3.Blue\n4.Green\n5.Yellow\n6.Orange\n");
	printf("\n\nEnter any number between 1-7\n");
	scanf("%c",&color);
	if(color=='1')
	{
		printf("\nVIOLET");
	}
	else
	{
		if(color=='2')
		{
			printf("\nINDIGO");
		}
		else
		{
			if(color=='3')
			{
				printf("\nBLUE");
			}
			else
			{
				if(color=='4')
				{
					printf("\nGREEN");
				}
				else
				{
					if(color=='5')
					{
						printf("\nYELLOW");
					}
					else
					{
						if(color=='6')
						{
							printf("\nORANGE");
						}
						else
						{
							if(color=='7')
							{
								printf("\nRED");
							}
							else
							{
								printf("\nSorry Enter A Correct Color color ");
							}
						}
					}
				} 
			}
		}
	}
	printf("\n\n");
	return 0;
}






