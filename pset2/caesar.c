#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) {

    if (argc != 2) { 
        printf("Invalid input\n");
        return 1;
    }
    
    int k = atoi(argv[1]); //cast string k (argv[1]) as an int 
    printf("plaintext: ");
    string p = get_string(); //get plaintext 

    if (p != NULL) {
        for (int i = 0, n = strlen(p); i < n; i++) { //for each char in string
            if (isalpha(p[i])) {
                if (isupper(p[i])) { //check if char is uppercase
                    p[i] = (((p[i] + k - 'A') % 26) + 'A'); //calculate remainder and convert back to ASCII
                }
                else {
                    p[i] = (((p[i] + k - 'a') % 26) + 'a'); //otherwise do for lowercase
                }
            }
        }
    }
    printf("ciphertext: %s\n", p); //print ciphertext
    return 0;
}
