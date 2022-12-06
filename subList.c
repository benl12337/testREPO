#include <stdio.h>

#include "List.h"


int main(void) {
    
    printf("Input list:\n");
    List input = listNew();


    // get first input
    for (int i = 0; i < 5; i++) {
        int num;
        scanf("%d", &num);
        listAppend(input, num);
    }
    listPrint(input);

    // enter sublist numbers
    int start, end;
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);

    List smallestSublist = findSmallestSublist(input, start, end);

    listPrint(smallestSublist);

    listFree(smallestSublist);
    listFree(input);
}