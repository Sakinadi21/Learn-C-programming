#include <stdio.h>

int main() {
    char str[20] = {'M', 'A', 'S', 'H', 'I', '!', '\0'}; // Added null terminator to properly end the string
    str[4] = 'U'; // Modify the fifth character from 'U' to 'I'

    int i = 0;
    while (str[i] != '!') { // Loop until the exclamation mark is found
        printf("%c", str[i]);// Print the character at position i
        // The line "printf("%c", i[str]);" is not needed and doesn't make sense.
        i++;
    }

    return 0;
}
