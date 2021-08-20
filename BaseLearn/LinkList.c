#include "stdio.h"
#include "stdlib.h"

typedef struct LinkNode {
    int data;
    struct LinkNode *next;
} *LinkList;

LinkList create();

LinkList detect(LinkList head, int address);

void show(LinkList head);

void delElement(LinkList head, int address);

void addElement(LinkList head, int address, int data);

void changeElement(LinkList head, int address, int data);

int main() {
    LinkList head = create();
    show(head);
    addElement(head, 4, 1023);
    show(head);
    delElement(head, 5);
    show(head);
    changeElement(head, 15, 99);
    show(head);
    return 0;
}

LinkList create() {
    LinkList head = (LinkList) malloc(sizeof(LinkList));
    LinkList tmp = head;
    for (int i = 0; i < 10; ++i) {
        LinkList node = (LinkList) malloc(sizeof(LinkList));
        node->data = i;
        tmp->next = node;
        tmp = tmp->next;
    }
    return head;
}

void show(LinkList head) {
    LinkList tmp = head;
    while (tmp->next) {
        tmp = tmp->next;
        printf("%d ", tmp->data);
    }
    printf("\n");
}

void delElement(LinkList head, int address) {
    LinkList temp = detect(head, address);
    if (temp == NULL) {
        return;
    }
    LinkList del = temp->next;
    temp->next = temp->next->next;
    free(del);
}

void addElement(LinkList head, int address, int data) {
    LinkList temp = detect(head, address);
    if (temp == NULL) {
        return;
    }
    LinkList newNode = (LinkList) malloc(sizeof(LinkList));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
}

void changeElement(LinkList head, int address, int data) {
    LinkList temp = detect(head, address);
    if (temp == NULL) {
        return;
    }
    temp->data = data;
}

LinkList detect(LinkList head, int address) {
    LinkList temp = head;
    for (int i = 0; i < address; ++i) {
        temp = temp->next;
    }
    return temp;
}