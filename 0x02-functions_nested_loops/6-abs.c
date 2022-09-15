#include "main.h"

/**
 * _abs - converts to absolute value
 * @para: parameter
 *
 * Return: absolute intger
 */
int  _abs(int para)
{
	int parameter  = para;

	if (parameter < 0)
		parameter = 0 - parameter;

	return (parameter);
}
