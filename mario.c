#include <cs50.h>
#include <stdio.h>

int main() {
    int height;
    do {
        printf("Height: ");
        height = get_int();
    } while (height > 23 || height < 0);
    
for (int row = 1; row <= height; row++)   
    { 
       int spaces = height - row;
       for (int i = 0; i < spaces; i++)
       {
           printf(" ");
       }
       
       int hashes = row + 1;
       for (int i = 0; i < hashes; i++)
       {
           printf("#");
       }
       printf("\n");
    }
}
