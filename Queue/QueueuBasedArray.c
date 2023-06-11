#include"QueueuBasedArray.h"

void EnQueue(u8 Data)
{
	if (IsFul()==Fully)
	{
		return ; 
	}
	else
		
	{
		if(Tail!=Max_Size-1)
		{
		DataArry[Tail]=data;
		Tail=++;
		front++;
		}
		else
		 {	
		DataArry[Tail] = data ;
		Tail=0; 
		front++;
		}
	}
}


void DeQueue(void)
{
	if (IsEmpty()==Empty)
	{
		return ;
	}
	else 
	{
		if(Head!=Max_Size-1)
		{
			DataArry[Head]=0;// we could dont wirte the instruction and the funciotn is worked fine
			fornt--;
			Head++;
			
		}
		else
		{
		DataArry[Head]=0;// we could dont wirte the instruction and the funciotn is worked fine
		Head=0;
		front--;
			
			
		}
		
	//printf("%d\n",DataArry[front--]);
		Head++;
		
	}
}

u8 IsEmpty(void) //->Ibeahim aly 
{
	 if (Head == Tail)
	 {
		 return Empty ;
	 }
	 else 
	 {
		 return NotEmpty ; 
	 }
}

u8 IsFully(void)//Ibrahim Aly
{
	u8 size ;
	if (Head < Tail)
	{	size = Tail-Head ; 
		if (size == Max_Size-1)
		{
			return Fully ;
		}
		else
		{
			return NotFully ; 
		}
	}
	else (Head > Tail)
	{
		Tail = Tail + (Max_Size - 1) ; 
		size = Tail - Head ; 
		if (size == Max_Size-1)
		{
			return Fully ;
		}
		else
		{
			return NotFully ; 
		}
	}
}
u8 IsFul(void) //Momen Elhelw
{
	if (front == (Max_Size -1))
	{
		return Fully ; 
	}
	else 
	{
		return NotFully ; 
	}
}