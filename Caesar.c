#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{ 
    bool Success = false;
    int key = 0;
    int input_length = 0;
    string text = "";
    
    do
    {
        if(argc != 2)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        for (int j = 0, n = strlen(argv[1]); j < n; j++)
    {
        if (! isdigit(argv[1][j]))
        {
            printf("Usage: ./caesar key\n");
         return 1;
        }
    }     
       key = atoi(argv[1]);   
    if (key < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
        else
        {
            Success = true;
            printf("plaintext:  ");
        }
   } 
    while(!Success);
    text = get_string("");
     printf("ciphertext: ");
       input_length = strlen(text);
        for(int i = 0; i < input_length; i++)
    { 
        if(isalpha(text[i]))
        {
           if(islower(text[i]))
            {   
                printf("%c", ((((text[i] - 97)+key)%26)+97));
            }
           else
            {   
              printf("%c", ((((text[i] - 65)+key)%26)+65));
            }
        }
       else
        {   
          printf("%c", text[i]);
        }
    }
   printf("\n");
    return 0;  
}