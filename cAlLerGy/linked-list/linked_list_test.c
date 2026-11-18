#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* insert_front(Node* head_nord, int input) {    
    Node* new_node;
    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = input;
    new_node->next = head_nord;
    head_nord = new_node;

    return head_nord;
}

void insert_back(Node* head_node, int input) {
    Node* new_node;
    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = input;

    // find last node
    Node* i;
    for (i = head_node; i->next != NULL; i = i->next) {
        continue;
    }
    i->next = new_node;
}

void prtnnd(Node* head_node, int n) {
    Node* cursor;
    int i = 1;
    for (cursor = head_node; (cursor != NULL) && (i < n); cursor = cursor->next) {
        i += 1;
    }
    printf("%d\n", cursor->data);
}

int main(void) {
    Node hello;
    hello.data = 15;
    hello.next = NULL;

    Node* head_node = &hello;

    insert_back(head_node, 25);
    insert_back(head_node, 35);
    insert_back(head_node, 45);
    insert_back(head_node, 55);

    prtnnd(head_node, 2);
    prtnnd(head_node, 4);

    printf("end\n");
    return 0;
}
