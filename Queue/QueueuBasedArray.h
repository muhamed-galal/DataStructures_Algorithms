#ifndef QUEUE_ARRAY_H_
#define QUEUE_ARRAY_H_

#define Max_Size       5 
#define Empty          1
#define NotEmpty       0
#define NotFully       0 
#define Fully          1 


u8 DataArry[Max_Size] = {0};
s8 front = -1 ; 
u8 Head = 0 ;    //Anwer -> index number 0 
u8 Tail = 0 ;    // Anwer -> 

void EnQueue(u8 Data);
void DeQueue(void);
u8 IsEmpty(void) ;
u8 IsFul(void);


#endif 