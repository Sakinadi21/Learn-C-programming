
#include <stdio.h>

typedef int* int_pointer;


int main() {
    int x = 7, y=5;
    int_pointer a=&x,b=&y; //int* x and int y
    printf("%p\n", a);
     printf("%p\n", b);

    return 0;
}
