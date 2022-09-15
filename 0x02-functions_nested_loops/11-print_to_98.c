#include"main.h"



/**

 * print_to_98 - print n to 98 counts

 *           separated by comma, followed

 *           by space and number should be

 *           printed in order

 *

 * @n: input

*/



void print_to_98(int n)

{

	int count;



	if (n > 98)

		for (count = n; count > 98; --count)

			printf("%d, ", count);

	else

		for (count = n; count < 98; ++count)

			printf("%d, ", count);

	printf("98\n");

}



ADVANCED TASK 1

vi 100-times_table.c

#include"main.h"



/**

 * print_times_table - prints time table of n

 *

 * @n: takes number input

*/



void print_times_table(int n)

{

	int prod, mult, num;



	if (n <= 15 && n >= 0)

	{

		for (num = 0; num <= n; ++num)

		{

			_putchar(48);

			for (mult = 1; mult <= n; ++mult)

			{

				_putchar(',');

				_putchar(' ');



				prod = num * mult;



				if (prod <= 9)

					_putchar(' ');

				if (prod <= 99)

					_putchar(' ');



				if (prod >= 100)

				{

					_putchar((prod / 100) + 48);

					_putchar((prod / 10) % 10 + 48);

				} else if (prod <= 99 && prod >= 10)

					_putchar((prod / 10) + 48);

				_putchar((prod % 10) + 48);

			}

			_putchar('\n');

		}

	}

}
