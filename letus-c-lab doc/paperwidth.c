#include <stdio.h>


void printPaperSizes(int n, int width, int height) {
    // Base case: stop when n is greater than 8
    if (n > 8) {
        return;
    }
    printf("A%d: %d x %d\n", n, width, height);
    printPaperSizes(n + 1, height, width / 2);
}

int main() {
    // Starting dimensions for A0
    int widthA0 = 841;
    int heightA0 = 1189;

    printPaperSizes(0, widthA0, heightA0);

    return 0;
}
