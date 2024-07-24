#include<LPC214X.h>
int main()
{
 IODIR0 |=(1<<13);
 IODIR0 |=(1<<14);
if((1<<16)&IOPIN1)
  {
    IOSET0 |=(1<<13);
		
	}
		else{
    IOCLR0 |=(1<<13);
  }
} 
