#include <stdio.h>
int main() {

    int i = 1;

    while (i <= 10) {

        if (i == 6) {

            i++;        // ต้องเพิ่มค่า i ด้วย ไม่งั้นจะวนลูปค้างที่ 6

            continue;

        }

        printf("%d ", i);

        i++;

    }

    return 0;

}