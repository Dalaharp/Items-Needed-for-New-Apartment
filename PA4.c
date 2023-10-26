

/*-----------------------DESCRIPTION---------------------------*/
/*This is the PA4.c part of the greater programming assignment.*/
/*This includes the main function which is an implementation of*/
/*the other functions. Although not required, I also added ways*/
/*for handling edge cases, as well as output if the user does  */
/*not enter in proper command-line input. Thank you for looking*/
/*at my code!!!!! :):):):):):):):):):):):):):):):):):):):):):) */
/*-------------------------------------------------------------*/

#include "defs.h"

//Main function, implements other functions
//Parameters:   int and char pointer
//Returns:      int for compiling purposes
int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s <number of items>\n", argv[0]);
        return 1;
    }
    int size = atoi(argv[1]);
    item *itemList = malloc(size * sizeof(item));
    if (itemList == NULL) {
        printf("Error: Unable to allocate memory for item list\n");
        return 1;
    }
    buildList(itemList, size);
    printItems(itemList, size);
    free(itemList);
    return 0;
}



