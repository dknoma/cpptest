//============================================================================
// Name        : tests.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct linked_list_node {
    int data;
    struct linked_list_node* next_ptr;
};

void Create_node(struct linked_list_node** head_p, int value);
void Print_list(struct linked_list_node* head_p);

int main() {
    struct linked_list_node* head = NULL;
    int value;
    printf("Please enter a value to append to the list: ");
    // waits for user input before inserting into the list; exits if a - number or non-integer was used.
    while(scanf("%d", &value) == 1 && value >= 0) {
        Create_node(&head, value);
        printf("Please enter another value to append to the list: ");
    }
    Print_list(head);
    return 0;
}

/*
 * Function: Creates a new node and appends it to the head of the linked list
 * Input:   head_p: head of a linked list
 *          value: data of the new node
 */
void Create_node(struct linked_list_node** head_pp, int value) {
    // temp = new node
    struct linked_list_node* temp = new linked_list_node();
    // temp takes value as its data and whatever head is pointing to as the next node
    temp ->data = value;
    temp ->next_ptr = *head_pp;
    // make head equal to the new node
    *head_pp = temp;
}

void Print_list(struct linked_list_node* head_p) {
    struct linked_list_node* current_p = head_p;

    printf("list = ");
    while(current_p != NULL) {
        printf("%d ", current_p ->data);
        current_p = current_p ->next_ptr;
    }
    printf("\n");
}

