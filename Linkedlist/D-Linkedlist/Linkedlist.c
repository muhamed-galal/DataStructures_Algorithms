#include <stdio.h>
#include <stdlib.h>
#include "Linkedlist.h"
#include "STD_TYPES.h"

Element* Head = Null; 		//Pointer to the first element in the list
Element* Tail = Null;		//pointer to the last element in the list

Element* Creat_Element()
{
	
	return (Element*)malloc(sizeof(Element));
	
}

void Scan_Elemnet(Element* User)
{
	
	printf("Enter The First Name :\n");
	scanf("%s",&User->First_Name);
	printf("Enter The Second Name :\n");
	scanf("%s",&User->Second_Name);
	printf("Enter The Age :\n");
	scanf("%d",&User->Age);
	printf("Enter The ID :\n");
	scanf("%d",&User->ID);
	
}


void Add_Element()
{
	Element* User = Creat_Element();
	Scan_Elemnet(User);
	
	User->Next=Null;
	
	if(Head==Null && Tail==Null)
	{
		Head=User;
		Tail=User;
		User->Prev=Null;
		
	}
	else
	{
		
		Tail->Next=User;
		User->Prev=Tail;
		Tail=User;
		
	}		
	
}

Element* Search_Element(u32 ID)
{
	Element* Temp=Head;
	
	if(Temp)
	{
		while(Temp->ID!=ID && Temp!=Null)
		{
			
			Temp=Temp->Next;	
			
		}
		if(Temp==Null)
		{
			printf("The Element is not found \n");
			return Temp;
			
		}
		else if(Temp->ID==ID)
		{
			printf("The Element is Detected \n");
			return Temp;	
			
		}
		
	}
	else
	{
		printf("The List is Empty\n");
		
	}
	
}
void Display_Element(u32 ID)
{
	
	Element* Display=Search_Element(ID);
	if(Display){
	printf("The First Name is %s\n",Display->First_Name);
	printf("The Second Name is %s\n",Display->Second_Name);
	printf("The Age = %d\n",Display->Age);
	printf("The ID = %d\n",Display->ID);
	}

}
void Display_All()
{
	Element* DisplayAll=Head;
	u8 Counter=1;
	
	if(DisplayAll)
	{
		while(DisplayAll!=Null)
		{
			printf("THE %d Element to Display \n",Counter);
			printf("The First Name is %s\n",DisplayAll->First_Name);
			printf("The Second Name is %s\n",DisplayAll->Second_Name);
			printf("The Age = %d\n",DisplayAll->Age);
			printf("The ID = %d\n",DisplayAll->ID);
			
			DisplayAll=DisplayAll->Next;
			Counter++;
				
		}
	}
	else
	{
		printf("The List is Empty ");
		
	}
	
}
void Delete_Element(u32 ID)
{
	Element* Delete = Search_Element(ID);
	
	if(Delete)
	{
		//if the element is the only element
		if(Head == Delete && Tail == Delete)
		{
			Head=Null;
			Tail=Null;
			
		}
		//if the element is the first element
		else if(Head==Delete)
		{
			
			Head = Delete->Next;
			Delete->Next->Prev=Null;
	
		}
		//the element is the last element
		else if(Tail==Delete)
		{
			
			Tail=Delete->Prev;
			Delete->Prev->Next=Null;	
			
		}
		// the element is mid element
		else
		{
			
			Delete->Prev->Next=Delete->Next;
			Delete->Next->Prev=Delete->Prev;
			
		}
			
	free(Delete);		
		
	}	
	
}




