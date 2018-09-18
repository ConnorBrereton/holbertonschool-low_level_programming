#include "holberton.h"

/**
 * jack_bauer - Prints full day EU time min by min
 *
 * @left-minute: 00:10
 *
 * @right-minute: 00:01
 *
 * @left-hour: 10:00
 *
 * @right-hour: 01:00
 *
 * description: Displays minbymin EU time w/o time lib
 *
 * Return: Void fcn so no value
 */

void jack_bauer(void)
{
	int left_minute, right_minute, left_hour, right_hour;

	left_hour = 0;
	while (left_hour <= 2)
	{
		right_hour = 0;

		while (right_hour <= 9)
		{
			if (right_hour > 3 && left_hour == 2)
				break;
			left_minute = 0;
			while (left_minute < 6)
			{
				right_minute = 0;
				while (right_minute < 10)
				{
					_putchar(left_hour + '0');
					_putchar(right_hour + '0');
					_putchar(58);
					_putchar(left_minute + '0');
					_putchar(right_minute + '0');
					_putchar('\n');
					right_minute++;
				}
				left_minute++;
			}
			right_hour++;
		}
		left_hour++;
	}
}
