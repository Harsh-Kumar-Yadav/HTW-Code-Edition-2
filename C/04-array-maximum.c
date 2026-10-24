#include <stdio.h>

int main(void) {
    int n;
    int values[100];
    int maximum = 0;

    printf("How many integers (1-100)? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid count.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (values[i] > maximum) {
            maximum = values[i];
        }
    }

    printf("Maximum = %d\n", maximum);
    return 0;
}
