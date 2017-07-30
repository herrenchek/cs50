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
     for (int i = 0; i < strlen(argv[1]); i++) { //interate through argv[1]
        if (!isalpha(argv[1][i])){ //check if a char is not alphabetical
            printf("Invalid input\n");
            return 1;
        }
    }
    
    string key = argv[1]; 
    int k;
    int j = 0;
    printf("plaintext: ");
    string p = get_string(); //plaintext 

   if (p != NULL) {
        for (int i = 0, n = strlen(p); i < n; i++) { //for each char in string
            if (isalpha(p[i])) {
                
                int index = j % strlen(key);
                j++;
                
                if isupper(key[index]) {
                k = key[index] - 'A';
                    }
                else {
                k = key[index] - 'a';
                }
                
                if (isupper(p[i])) { //check if char in plaintext string is uppercase
                    p[i] = (((p[i] + k - 'A') % 26) + 'A'); 
                }
                else {
                    p[i] = (((p[i] + k - 'a') % 26) + 'a');
                }
            }
        }
    }
    printf("ciphertext: %s\n", p); //print ciphertext
    return 0; //exit
}
