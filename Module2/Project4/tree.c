#include <stdio.h>
#include <stdlib.h>

typedef struct Node // Tree structure
{
    int value;
    struct Node *left;
    struct Node *right;
} Node;

Node *newNode(int value) // Make a new node
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *insert(Node *node, int value) // Insert a new node
{
    if (node == NULL)
    {
        return newNode(value);
    }
    if (value < node->value)
    {
        node->left = insert(node->left, value);
    }
    else if (value > node->value)
    {
        node->right = insert(node->right, value);
    }
    return node;
}

void printTree(Node *node, int level) // Display the Tree
{
    if (node == NULL)
    {
        return;
    }
    printTree(node->right, level + 1);
    for (int i = 0; i < level; i++)
    {
        printf("    ");
    }
    printf("%d\n", node->value);
    printTree(node->left, level + 1);
}

int main() // Main function
{
    Node *root = NULL; // Make empty tree
    int choice, data;

    while (1)
    {
        printf("\nTree Operations:\n");
        printf("1. Insert a node\n");
        printf("2. Display the Tree\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: // Insert a node
                printf("Enter the value to be inserted: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2: // Display the Tree
                printf("Tree:\n");
                printTree(root, 0);
                break;
            case 3: // Exit
                printf("Exiting program...\n");
                exit(0);
                break;
            default: // Invalid choice
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}