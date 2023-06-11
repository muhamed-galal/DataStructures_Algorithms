#ifndef _linkedlist_h
#define _linkedlist_h
#include "STD_TYPES.h"

#define Null (void*)0

typedef struct node
{
	u8 First_Name[10];	
	u8 Second_Name[10];
	u32 Age;
	u32 ID;
	struct node * Next;
	struct node * Prev;
	
}Element ;

//Functions Declarations

Element* Creat_Element();

void Add_Element();

void Scan_Elemnet(Element* User);

Element* Search_Element(u32 ID);

void Delete_Element(u32 ID);

void Display_Element(u32 ID);

void Display_All();


#endif









