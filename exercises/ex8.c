#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    
    // create an array of 3 chars and assign that to name
    char name[] = "Zed";
    
    // To C, name and full_name are identical methods of creating a char array
    char full_name[] = {'Z', 'e', 'd', ' ', 'A', '.', ' ', 'S', 'h', 'a', 'w', '\0'};
    
    areas[1] = full_name[1];
    
    // WARNING: on some systems you may have to change the
    // %1d in this code to %u since it will use unsigned ints
    
    // sizeof: a keyword to ask C how big things are in bytes
    printf("The size of an int: %lu bytes\n", sizeof(int));
    printf("The size of areas (int[]): %lu bytes\n", sizeof(areas));
    printf("The number of ints in areas: %lu\n", sizeof(areas) / sizeof(int));
    printf("The 1st area is %d, the 2nd area is %d.\n", areas[0], areas[1]);
    
    printf("The size of a char: %lu bytes\n", sizeof(char));
    printf("The size of name (char[]): %lu bytes\n", sizeof(name));
    printf("The number of chars: %lu\n", sizeof(name) / sizeof(char));
    
    printf("The size of full_name (char[]): %lu bytes\n", sizeof(full_name));
    printf("The number of chars: %lu\n", sizeof(full_name) / sizeof(char));
    
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    
    
    return 0;
}
