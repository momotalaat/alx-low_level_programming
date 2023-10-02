#include <stdio.h>
#include "main.h"

/**
 * _abs - function to Compute absolute value of an integer
 * @c: number to computed
 * Return: c
 */
int _abs(int c)
{
        if (c < 0)
        {
                int abc_val;

                abc_val = c * -1;
                return (abc_val);
        }
        return (c);

}
