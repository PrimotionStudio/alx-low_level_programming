#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * jack_bauer - Entry point
  *
  */
void jack_bauer(void)
{
	int hour1 = 0;
	int hour2 = 0;
	int minute1 = 0;
	int minute2 = 0;

	while (hour1 <= 23)
	{
		while (hour2 <= 23)
		{
			while (minute1 <= 23)
			{
				while (minute2 <= 23)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(minute1 + '0');
					_putchar(minute2 + '0');
					_putchar('\n');

					minute2 = 0;
				}

				minute1 = 0;
			}

			hour2 = 0;
		}

		hour1 = 0;
	}

}
