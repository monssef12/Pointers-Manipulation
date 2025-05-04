#include <stdio.h>
#include <stdlib.h>

// Definition of a node
struct Node {
    int value;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at the end
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to print the list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to free the list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* head = NULL; // Create an empty list

    // Insert some values
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    // Print the list
    printf("Linked List:\n");
    printList(head);

    // Free memory
    freeList(head);
    return 0;
}
