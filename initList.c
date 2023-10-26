
/*-----------------------DESCRIPTION---------------------------*/
/*This is the initList.c part of the programming assignment.   */
/*This function initializes the struct so that items can be put*/
/*inside the struct easily without worrying much about errors. */
/*Thank you for reviewing my code!!!!! :):):):):):):):):):):):)*/
/*-------------------------------------------------------------*/

#include "defs.h"

//Initializes the struct so items can be put inside the struct
//Parameters:   char pointer, int
//Returns:      item struct pointer
item* initItem(char *newItem, int newQty) {
    item *newItemPtr = malloc(sizeof(item));
    if (newItemPtr == NULL) {
        printf("Error: Unable to allocate memory for new item\n");
        exit(1);
    }
    strcpy(newItemPtr->itemName, newItem);
    newItemPtr->itemQty = newQty;
    printf("Need the item (1) or already have it (0): \n");
    scanf("%3s", newItemPtr->needed);
    getchar();
    if(strcmp(newItemPtr->needed, "1")){
      strcpy(newItemPtr->needed, "no");
    }
    else {
      strcpy(newItemPtr->needed, "yes");
    }
    return newItemPtr;
}
