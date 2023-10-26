
/*-----------------------DESCRIPTION---------------------------*/
/*This is the printItems.c part of the programming assignment. */
/*This function prints out the items within the struct and for-*/
/*-matting it correctly. Thank you for reviewing my code!!!:):)*/
/*-------------------------------------------------------------*/


#include "defs.h"

//Prints items within the struct item list
//Parameters:   item pointer struct, int
//Returns:      Nothing
void printItems(item *itemList, int size) {
    printf("\n\nItems in list: \n");
    for(int i = 0; i < size; i++) {
        printf("%d %-15s needed: %s\n", itemList[i].itemQty, itemList[i].itemName, itemList[i].needed);
    }
    printf("\n\n");
}
