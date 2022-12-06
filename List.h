typedef struct node *Node;
typedef struct list *List;

struct node {
    int value;
    Node next;
};

struct list {
    Node first;
    Node last;
    int size;
};


List listNew(void);
List listAppend(List l, int i);
void listPrint(List l);
int listSize(List l);
List findSmallestSublist(List l, int start, int end);
void listFree(List l);