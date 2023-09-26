#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a node in a linked list
typedef struct node
{
    char data;
    struct node *next;
} node;

// Define a global variable 'top' to represent the top of the stack
node *top = NULL;

// Function to check if the stack is empty
int isEmpty()
{
    return (top == NULL);
}

// Function to push a character onto the stack
void push(char Char)
{
    // Allocate memory for a new node
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL)
    {
        printf("Stack Overflow!\n");
        exit(0);
    }
    newNode->data = Char;
    newNode->next = top;
    top = newNode;
}

// Function to pop a character from the stack
char pop()
{
    if (isEmpty())
    {
        printf("Stack underflow!\n");
        exit(0);
    }
    node *temp = top;
    char Char = temp->data;
    top = top->next;
    free(temp);
    return Char;
}

// Function to check if an expression has balanced parentheses
int isBalanced(char *exp)
{
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            // If an opening parenthesis is encountered, push it onto the stack
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty())
            {
                // If a closing parenthesis is encountered and the stack is empty, it's not balanced
                return 0;
            }
            else if ((exp[i] == ')' && pop() != '(') ||
                     (exp[i] == ']' && pop() != '[') ||
                     (exp[i] == '}' && pop() != '{'))
            {
                // If the popped character from the stack doesn't match the current closing parenthesis, it's not balanced
                return 0;
            }
        }
    }
    // If the stack is empty at the end, the expression has balanced parentheses
    return isEmpty();
}

int main()
{
    char exp[100];
    printf("Enter an expression: ");
    scanf("%s", exp);
    if (isBalanced(exp))
    {
        printf("The expression has balanced parentheses\n");
    }
    else
    {
        printf("The expression does not have balanced parentheses\n");
    }
}

// #include <stdio.h>
// #include <string.h>

// int isBalanced(char *exp)
// {
//     int count = 0;

//     for (int i = 0; exp[i] != '\0'; i++)
//     {
//         if (exp[i] == '(')
//         {
//             count++;
//         }
//         else if (exp[i] == ')')
//         {
//             count--;
//             if (count < 0)
//             {
//                 return 0;
//             }
//         }
//     }

//     return count == 0;
// }

// int main()
// {
//     char exp[100];
//     printf("Enter an expression: ");
//     scanf("%s", exp);
//     if (isBalanced(exp))
//     {
//         printf("The expression has balanced parentheses\n");
//     }
//     else
//     {
//         printf("The expression does not have balanced parentheses\n");
//     }
//     return 0;
// }
