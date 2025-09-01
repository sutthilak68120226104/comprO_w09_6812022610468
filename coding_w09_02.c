#include <stdio.h>



int main() {

    int sum = 0, p, x, y;

    // รับค่า y

    printf("Enter y: ");

    scanf("%d", &y);

    // ทำซ้ำ x = 1, 3, 5, ... 15

    for (x = 1; x <= 15; x += 2) {

        p = x * y;

        sum = sum + p;

        printf("%d * %d = %d\n", x, y, p);

    }

    printf("Summation of x * y = %d\n", sum);

    return 0;

}