#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: points to printed pieces
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int g, r;

	for(g = 0; g < 8; g++)
	{
		for(r = 0; r < 8; r++)
		{
			_putchar(a[g][r]);
		}
		_putchar('\n');
	}
}
