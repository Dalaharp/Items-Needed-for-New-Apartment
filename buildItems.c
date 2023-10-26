

/*-----------------------DESCRIPTION---------------------------*/
/*This is the buildItems.c part of the programming assignment. */
/*This function builds a list of apartment items. This function*/
/*stores user input inside of the item struct. Thank you for   */
/*reviewing my code!!!! :):):):):):):):):):):)                 */
/*-------------------------------------------------------------*/


#include "defs.h"

//Stores user input inside of the item struct
//Parameters:   item struct pointer, int
//Returns:      Nothing
void buildList(item *itemList, int size) {
    item *newItemPtr = NULL;
    for(int i = 0; i < size; i++) {
        char itemName[30];
        int itemQty;
        printf("Apartment item: ");
        fgets(itemName, sizeof(itemName), stdin);
	itemName[(strcspn(itemName, "\n"))] = 0;
	printf("\nHow many? \n");
        scanf("%d", &itemQty);
	getchar();
        newItemPtr = initItem(itemName, itemQty);
        itemList[i] = *newItemPtr;
        free(newItemPtr);
    }
}
