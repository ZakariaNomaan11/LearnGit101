#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    int data;
    struct Node* next;
};
typedef struct Node node;

int main() {
    node* head = NULL;
    node* temp = NULL;
    node* newNode = NULL;

    for (int i = 0; i < 10; i++) {
        newNode = (node*)malloc(sizeof(node));
        if (newNode == NULL) {
            printf("Memory failed to allocate\n");
            exit(1);
        }
        int value;
        scanf("%d", &value);
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        }else {
            temp->next = newNode;
            temp = newNode;
        }
    }


    
    for (node* temu = head; temu != NULL; temu = temu->next) {
        printf("%d\n",temu->data);
    }
    return 0;
}