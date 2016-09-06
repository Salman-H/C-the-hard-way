#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;
    
    printf("You have %d bugs at the imaginary rate of %f.\n", 
            bugs, bug_rate);
    
    
    // Declare a huge number using a new type long for storing big numbers.
    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    
    // Print out that number using %ld which adds a modifier to the usual %d. 
    // Adding 'l' (the letter ell) means "print this as a long decimal".
    printf("The entire universe has %ld bugs.\n", 
            universe_of_defects);
            
            
    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n",
            expected_bugs);
    
    // Craft up a depiction of your bug rate compared to the bugs in the universe, 
    // which is a completely inaccurate calculation. It's so small though that 
    // we have to use %e to print it in scientific notation.
    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only %e of the universe.\n",
            part_of_universe);
            
    // this makes no sense, just a demo of something weird
    
    // Make a character, with a special syntax '\0' which creates a 'nul byte' 
    // character. This is effectively the number 0.
    char null_byte = '\0';
    int care_percentage = bugs * null_byte;
    
    // Print that out, and notice I've got a %% (two percent chars) so I can 
    // print a '%' (percent) character.
    printf("Which means you should care %d%%.\n",
            care_percentage);
            
    return 0;
}