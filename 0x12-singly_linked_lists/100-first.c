#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * myStartupFun - to run command before main function
 *
 * Return: Nothing
 */
void myStartupFun(void) __attribute__ ((constructor));
{
	printf("You're beat! and yet, you must allow,\n" "I bore my house upon my back!\n");
}
