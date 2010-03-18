/*  */
 
#include <avr/io.h>
#include <util/delay.h>
 
int main (void)
{
  unsigned char counter;
  /* set PORTB for output*/
  DDRB = 0xFF;
 
  while (1)
    {
      /* set PORTB.2 high */
      PORTB = 0xFF;
 
      /* wait (10 * 120000) cycles = wait 1200000 cycles */
      counter = 0;
      while (counter != 50)
	{
	  /* wait (30000 x 4) cycles = wait 120000 cycles */
	  _delay_loop_2(30000);
	  counter++;
	}
 
      /* set PORTB.2 low */
      PORTB = 0x00;
 
      /* wait (10 * 120000) cycles = wait 1200000 cycles */
      counter = 0;
      while (counter != 50)
	{
	  /* wait (30000 x 4) cycles = wait 120000 cycles */
	  _delay_loop_2(30000);
	  counter++;
	}
    }
 
  return 1;
}
