#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    	do
	{
		//take user input
		n = get_int("Height: ");
	} while (n < 1 || n > 8);

    int h = n;
    int w = (h * 2) + 1;
    int i = 0;
    int j = 0;

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (j >= h - i -1 && j !=h && j <= w - h + i)
                printf("#");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}