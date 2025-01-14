#include <stdio.h>

int main() {
    int num1 = 5; //1010 in binary
    int num2 = 6; //0110 in binary

    // Bitwise AND operation
    int AND = num1 & num2; //0010 in binary
    printf("Result of bitwise AND: %d\n", AND);

    // Bitwise OR operation
    int OR = num1 | num2; //1110 in binary
    printf("Result of bitwise OR: %d\n",OR);

    // Bitwise XOR operation
    int XOR = num1 ^ num2; //1100 in binary
    printf("Result of bitwise XOR: %d\n",XOR);

    

    return 0;
}
