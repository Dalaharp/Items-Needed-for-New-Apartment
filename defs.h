#ifndef DEFS_H
#define DEFS_H


/*-----------------------DESCRIPTION---------------------------*/
/*This is the defs.h part of the programming assignment. This  */
/*file includes header files, item structure definition, and   */
/*the function prototypes for the three other functions besides*/
/*the main. Thank you for reviewing my code!!!!!! :):):):):):) */
/*-------------------------------------------------------------*/

//header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct declaration
typedef struct {
    char itemName[30];
    int itemQty;
    char needed[4];
} item;

//function prototypes
void buildList(item *itemList, int size);
item* initItem(char *newItem, int newQty);
void printItems(item *itemList, int size);


#endif
