#include <stdio.h>

/**
 * __attribute__ - entry point
 * Description: function that prints output
 * Return: 0
 */

void __attribute__ ((constructor)) before_main_executes()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
