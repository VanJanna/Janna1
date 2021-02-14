#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string answer1=get_string("What's your name?\n");
	printf("Hello, %s.\n", answer1);
	string answer2=get_string("What can I get you to drink?\n");
	printf("%s? Coming right up!\n", answer2);
}
