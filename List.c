#include <stdio.h>
#include <stdlib.h>

#include "List.h"

static Node newNode(int i);

List listNew(void) {
    List l = malloc(sizeof(*l));
    l->first = NULL;
    l->last = NULL;
    l->size = 0;
    return l;
}


List listAppend(List l, int i) {
    if (l->first == NULL) {
        l->first = newNode(i);
        l->last = l->first;
        l->size++;
    } else {
        l->last->next = newNode(i);
        l->last = l->last->next;
    }
    return l;
}

static Node newNode(int i) {
    Node new = malloc(sizeof(*new));
    new->value = i;
    return new;
}

void listPrint(List l) {
    Node curr = l->first;

    while (curr != NULL) {
        printf("%d\n", curr->value);
        curr = curr->next;
    }
}

void listFree(List l) {
    Node prev;
    Node curr = l->first;

    while (curr != NULL) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }
    free(l);

}

List findSmallestSublist(List l, int start, int end) {
        return listNew();
}

int listSize(List l) {
    return l->size;
}