#include<stdio.h>
#include "STD_TYPES.h"
#include "Linkedlist.h"



void main()
{
	u32 Choice = 0;
	u8 Exit;
	u32 ID=0;
	
	do
	{
		printf("Please enter the function\n1: for ADD\n2: for Display one element\n3: for Delete the element with Id\n4: for Display all the element\n");
		scanf("%d",&Choice);
		
		switch(Choice)
		{
			case 1 : 
			// Add ELement
			Add_Element();
			break;
			
			case 2 :
			// Display one element
			printf("Enter the ID of the Element to Display\n");
			scanf("%d",&ID);
			Display_Element(ID);
			break;
			
			case 3 :
			// Delete the element you added
			printf("Enter the ID of the Element to Display\n");
			scanf("%d",&ID);
			Delete_Element(ID);
			break;
			
			case 4 :
			//Display all elements
			Display_All();
			break;
			
			default :
			printf("you entered a wrong number please try again\n");
			continue;
				
		}
	
	printf("enter 'e' for Exit \n");
	fflush(stdin);
	scanf(" %c",&Exit);
	
	}while(Exit!='e');
	

}