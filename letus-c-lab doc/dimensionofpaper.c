#include <stdio.h>

// Function to calculate and print paper sizes recursively
void printPaperSizes(int n, int width, int height) {
    // Base case: stop when n is greater than 8
    if (n > 8) {
        return;
    }

    // Print the current paper size
    printf("A%d: %d x %d\n", n, width, height);

    // Recursive call with updated dimensions
    printPaperSizes(n + 1, height, width / 2);
}

int main() {
    // Starting dimensions for A0
    int widthA0 = 841;
    int heightA0 = 1189;

    // Call the recursive function to print paper sizes A0 through A8
    printPaperSizes(0, widthA0, heightA0);

    return 0;
}
