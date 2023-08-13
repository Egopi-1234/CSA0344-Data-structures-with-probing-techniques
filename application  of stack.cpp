#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100

typedef struct {
    int data[MAX_STACK_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}


bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->data[++stack->top] = value;
}
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->data[stack->top--];
}
int evaluatePostfix(char *expression) {
    Stack stack;
    initialize(&stack);

    int i = 0;
    while (expression[i] != '\0') {
        if (expression[i] >= '0' && expression[i] <= '9') {
            push(&stack, expression[i] - '0');
        } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (expression[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
            }
        }
        i++;
    }

    return pop(&stack);
}

int main() {
    char expression[] = "523*+";
    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);

    return 0;
}
