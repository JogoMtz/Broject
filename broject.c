#include <stdio.h>
#include <string.h>

void print_binary_char(unsigned char c) {
    for (int i = 7; i >= 0; i--){   
      printf("%d", (c >> i) & 1);
    }
}

void print_binary_int(int num) {
    for (int i = 31; i >= 0; i--){
      int bit = (num >> i) & 1;
      printf("%d", bit);
      if (i % 8 == 0) printf(" ");
    }
}

int main() {
    int pin;
    char pass[21];

    printf("\n=== XOR ENCRYPTONATOR ===\n");
    printf("State your pass (Max 20 characters): ");
    scanf(" %20s", pass);

    printf("State a pin (number): ");
    scanf("%d", &pin);

    printf("\n---ENCRYPTION PROCESS---\n");
    printf("%-10s %-12s %12s %-10s\n", "Char#", "Original", "Encrypted", "Binary");
    printf("---------------------------------------------------\n");
    // Loop for pass array 20 max chars

    for (int i = 0; i < strlen(pass); i++) {
        unsigned char original = pass[i];
        unsigned char encrypted = original ^ (char)pin;

        printf("%10d '%c' (%3d)   %3d |         ", i + 1, original, original, encrypted);
        print_binary_char(encrypted);
        printf("\n");
    }

    //print pin in binary
    printf("\n--- PIN BINARY REPRESENTATION ---\n");
    printf("\nPin: %d\nBinary: ", pin);
    print_binary_int(pin);
    printf("\n");

    // Decryption
    printf("\n--- DECRYPTION VERIFICATION ---\n");
    for (int i = 0; i < strlen(pass); i++) {
        unsigned char original = pass[i];
        unsigned char encrypted = original ^ (char)pin;
        unsigned char decrypted = encrypted ^ (char)pin;

        printf("\nEncrypted pass: %3d | Decrypted pass: %3d ('%c')\n", encrypted, decrypted);
    }

    printf("\nWould you like to continue, operator? [Y/N]:\n");

    return 0;

}
