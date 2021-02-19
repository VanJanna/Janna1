#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int height;
    
    do
    {
        height = get_int("Введіть число від 1 до 8: ");
    }
    while( height < 1 || height > 8);
    
    for(int j = 0; height > j; j++ )
    {
        for(int n = 0; n < height - j -1; n++){
            printf(" ");
        }
        for(int n = 0; n < height; n++) {
            if(j >= n)
                printf("#");
        }
       printf("  ");
       for(int n = 0; n < height; n++) {
            if(j >= n)
                printf("#");
        }
        printf("\n");
    }
    return 0;
}