#include <stdio.h>
#define max 10
int a[max];
int top = -1;
void push();
void pop();
void peek();
void display();
void main()
{
    int option;
    do
    {
        printf("1. Push 2. Pop 3. Peek 4. Display 5. Exit\n");
        printf("Enter the option:\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        }
    } while (option != 5);
}

void push()
{
    int value;
    printf("Enter the value:\n");
    scanf("%d", &value);
    if (top == max - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        a[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d is deleted\n", a[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d\n", a[top]);
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        if (top == -1)
        {
            printf("Stack Underflow\n");
        }
        else
        {
            printf("%d\n", a[i]);
        }
    }
}
