#include <conio.h>
#include <stdio.h>
#include <iostream>
int main()
{
	char caracter = getch();
	while (true)
	{
		printf("Tecla: %i\n", caracter);
		if (caracter == 27)break;
	}
}
