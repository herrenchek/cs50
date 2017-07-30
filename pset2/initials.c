#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {

string s = get_string(); //take string from user and store it in s    
printf("%c", toupper(s[0])); //make the first char in string s uppercase

if (s != NULL) {
    for (int i = 1, n = strlen(s); i < n; i++) { //iterate through string
        if (s[i] == ' ') { 
            printf("%c", toupper(s[i + 1])); //if there is a 'space' print the next char in the string
        }
    }
}
printf("\n");
}
