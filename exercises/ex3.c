#include <stdio.h>

int main() 
{
    int age = 10;
    int height = 72;
    
    // In printf, we're passing in a string, and it's a format string 
    // like in many other languages
    printf("I am %d years old.\n");
    printf("I am %i inches tall.\n", height);
    
    return 0;
}