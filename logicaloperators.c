 #include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // Logical AND (&&)
    if (a < b && b < c) {
        printf("Both conditions are true.\n");
    }

    // Logical OR (||)
    if (a > b || b < c) {
        printf("At least one condition is true.\n");
    }

    // Logical NOT (!)
    if (!(a == b)) {
        printf("a is not equal to b.\n");
    }

    return 0;
}