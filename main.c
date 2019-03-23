#include "blink.h"
#include "reg.h"
#include <stdint.h>
#define BUTTON 0
int main(void)
{
	unsigned int a;
	while(1){
  
		a = read_button(BUTTON);
		if (a!=0)
		{
			blink(LED_BLUE);
			//blink_count(LED_GREEN,10);
		}

	}
	

}
