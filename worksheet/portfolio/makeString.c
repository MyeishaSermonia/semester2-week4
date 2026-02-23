
/*
Name: Johann Myeisha Sermonia
Student ID: 201865495
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    // define appropriate data to hold your answer
    char buffer[100] = "";

    // process the command-line data using appropriate string functions
    if (argc > 1) {
        // copies first argument into buffer
        strcpy(buffer, argv[1]);

        // start at i = 2 because 1 has already been copied
        // loop continues until the last argument is reached
        for (int i = 2; i < argc; i++) {
            // puts arguments together with "-"
            strcat(buffer, "-");
            // adds the next argument into buffer
            strcat(buffer, argv[i]);
        }
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}