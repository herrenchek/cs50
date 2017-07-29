#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main() {
    float f;
    int coins = 0;
    
    do {
    printf("How much change is owed?\n");
    f = 100 * get_float();
    } while (f < 1);
    
    int num = (int)round(f);

    while (num - 25 >= 0) { 
        num = num - 25;
        coins++;
    }
     while (num - 10 >= 0) { 
        num = num - 10;
        coins++;
    }
     while (num - 5 >= 0) { 
        num = num - 5;
        coins++;
    }
     while (num - 1 >= 0) { 
        num = num - 1;
        coins++;
    }
    printf("%i \n", coins);
}
