#include <stdio.h>
int main() {

    int start, stop;

    printf("Enter start number: ");

    scanf("%d", &start);

    printf("Enter stop number: ");

    scanf("%d", &stop);

    if (start < stop) {

        printf("Start number is %d and stop number is %d\n", start, stop);

        printf("-------------\n");

        printf("Sequence from start to stop: ");

        for (int i = start; i <= stop; i++) {

            printf("%d ", i);

        }

        printf("\nThank you.\n");

    } else if (start == stop) {

        printf("Your Start number is equal to Stop number, please try again!\n");

    } else {

        printf("Your Start number is greater than Stop number, please try again!\n");

    }

    return 0;

}