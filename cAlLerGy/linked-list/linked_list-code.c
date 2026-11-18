#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    double data;
    struct Node *next;
} Node;

int list_lenght(Node* head_ptr) {
    Node* cursor;
    int count = 0;

    for (cursor = head_ptr; cursor != NULL; cursor = cursor->next) {
        count += 1;
    }

    return count;
}

Node* list_head_insert(Node* head_ptr, double entry) {
    Node* new_node;
    new_node = (Node *)malloc(sizeof(Node));
    new_node->data = entry;
    new_node->next = head_ptr;
    head_ptr = new_node;
    return head_ptr;
}

void list_insert(Node* previous_ptr, double entry) {
    Node* new_node;
    new_node = (Node*)malloc(sizeof(Node));
    new_node->data = entry;
    new_node->next = previous_ptr->next;
    previous_ptr->next = new_node; 
}

Node* list_search(Node* head_ptr, double target) {
    if (head_ptr == NULL) return NULL;

    Node* cursor;

    for (cursor = head_ptr; cursor != NULL; cursor = cursor->next) {
        
        if (cursor->data == target) return cursor;
    }

    return NULL;
    
}

Node* list_locate(Node* head_ptr, int n) {
    Node* cursor;
    int i = 0;
    
    for (cursor = head_ptr; (cursor != NULL) && (i < n); cursor = cursor->next) {
        i += 1;
    }
    return cursor;
}

Node* list_head_remove(Node* head_ptr) {
    Node* remove_ptr;
    remove_ptr = head_ptr;

    if (head_ptr == NULL) return NULL;

    head_ptr = remove_ptr->next;
    free(remove_ptr);
    return head_ptr;
}

void list_remove(Node* previous_ptr) {
    Node* remove_ptr;
    remove_ptr = previous_ptr->next;
    previous_ptr = remove_ptr->next;
    free(remove_ptr);
}
int main(void) {
    
}