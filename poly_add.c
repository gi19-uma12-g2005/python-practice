#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    int coef;
    struct node *next;
} Node;

Node *lead1 = NULL;
Node *lead2 = NULL;
Node *result = NULL;

Node *create_node(int c, int p)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->coef = c;
    temp->val = p;
    temp->next = NULL;

    return temp;
}

void insert_end(Node **head, int c, int p)
{
    Node *node = create_node(c, p);
    if (*head == NULL)
    {
        *head = node;
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = node;
}

void add_poly()
{
    Node *p1 = lead1;
    Node *p2 = lead2;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->coef == p2->coef)
        {
            insert_end(&result, p1->val + p2->val, p1->coef);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->coef > p2->coef)
        {
            insert_end(&result, p1->val, p1->coef);
            p1 = p1->next;
        }
        else
        {
            insert_end(&result, p2->val, p2->coef);
            p2 = p2->next;
        }
    }

    while (p1 != NULL)
    {
        insert_end(&result, p1->val, p1->coef);
        p1 = p1->next;
    }

    while (p2 != NULL)
    {
        insert_end(&result, p2->val, p2->coef);
        p2 = p2->next;
    }
}
