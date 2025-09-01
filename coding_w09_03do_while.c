#include <stdio.h>
int main() {

    int i = 1;

    do {

        if (i == 6) {

            i++;        // ข้ามเลข 6 ไป

            continue;

        }

        printf("%d ", i);

        i++;

    } while (i <= 10);

    return 0;

}