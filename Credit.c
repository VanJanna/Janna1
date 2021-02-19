#include <stdio.h>
#include <cs50.h>
 
int main()
{
    long long i = get_long_long("Number: ");
    int xadd = 0, x2 = 0, addsum = 0, x2prod = 0, sum = 0, digitstwo,  multiple;
	bool valide;
 
    while (i > 0)
    {
        x2 = xadd;
        xadd = i % 10;
 
        if (addsum % 2 == 0)
        {
            sum += xadd;
        }
        else
        {
            multiple = 2 * xadd;
            x2prod += (multiple / 10) + (multiple % 10);
        }
 
        i /= 10;
        addsum++;
    }
 
    valide = (sum + x2prod) % 10 == 0;
    digitstwo = (xadd * 10) + x2;
 
    if (xadd == 4 && addsum >= 13 && addsum <= 16 && valide)
    {
        printf("VISA\n");
    }
    else if (digitstwo >= 51 && digitstwo <= 55 && addsum == 16 && valide)
    {
        printf("MASTERCARD\n");
    }
    else if ((digitstwo == 34 || digitstwo == 37) && addsum == 15 && valide)
    {
        printf("AMEX\n");
    }
    else
    {
        printf("INVALID\n");
    }
}