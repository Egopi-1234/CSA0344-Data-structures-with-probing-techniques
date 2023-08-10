#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int first = 0, second = 1, next;

    printf("Fibonacci Series: %d, %d, ", first, second);

    for (int i = 2; i < n; i++) {
        next = first + second;
        printf("%d , ", next);
        first = second;
        second = next;
    }

    printf("\n");

}
