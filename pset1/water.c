#include <cs50.h>
#include <stdio.h>

int main() {
    int x;
    do {
        printf("Minutes: ");
        x = get_int();
    } while (x <= 0);
    
    int y = x * 12;
    printf("Bottles: %i\n", y);
}

