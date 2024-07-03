#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Sakiba Belal";
    char* ptr = str;
    int i = 0;

    // The condition should check if the current character is not the null terminator
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
        i++;
    }

    // Optional: Print a newline for better output formatting
    printf("\n");

    return 0;
}
