#include <stdio.h>
#include <cs50.h>
void cough(void);
void sneeze(void);

int main(void){
    int i = get_int("enter a number: ");
   //printf("enter a number: ", %d);
   //char i = "%d";
   if(i % 2 == 0)
  {
  	cough();
	  }	
   else{
    sneeze();
   }
}
void sneeze(void)
{
	printf("hap�u");
}
void cough(void)
{
	printf("�h�");
}
