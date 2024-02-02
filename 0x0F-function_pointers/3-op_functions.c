#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add– function for addition
* @a: first parameter
* @b: second parameter
*
* Return: 0 if it is a sucess
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub – function for subtrsction
 * @a: first para meter
 * @b: second parameter
 *
 * Return: 0 if its a sucess
*/
int op_sub(int a, int b)
{
return (a – b);
}

/**
* op_mul –  function for multiplication
* @a: first parameter
* @b: second parameter
*
* Return: 0 if its a sucess
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div – fuction for division
* @a: first opsrsmeter
* @b: second parameter
*
* Return: 0 if it is a sucess
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf(“Errorn”);
exit(100);
}

return (a / b);
}

/**
* op_mod – function for modulo
* @a: first psrsmeter
* @b: second parameter
*
* Return: 0 if it is a success
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf(“Errorn”);
exit(100);
}

return (a % b);
}
