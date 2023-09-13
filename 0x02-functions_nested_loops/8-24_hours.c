#include "main.h"

/**
 * jack_bauer - Entry point
 * from 0 to 10
 * @n : intger represtents the numbers in time 
 * Return: Always 0 (Success)
 */
void jack_bauer(void n)
{

	for (n = '0'; n <= '2'; n++)
	{
		_putchar(n);
		for (n = '0'; n <= '3'; n++)
		{
			_putchar(n);
			for (n = '0'; n <= '6'; n++)
			{
				_putchar(n);
				for (n = '0'; n <= '9'; n++)
				{
					_putchar(n);
				}
			}	
		}
	_putchar ('\n')
	}
}
