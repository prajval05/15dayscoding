#include <stdio.h>
#include <string.h>
void encrypt(char* text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' + shift) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' + shift) % 26 + 'a';
        }
    }
}
void decrypt(char* text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' - shift + 26) % 26 + 'A';
        }
        else if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' - shift + 26) % 26 + 'a';
        }
    }
}
int main() {
    char text[100];
    int shift, choice;
    printf("Caesar Cipher - Encrypt and Decrypt\n");
    printf("Enter the message: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter the shift key (1-25): ");
    scanf("%d", &shift);
    printf("\n1. Encrypt the message\n2. Decrypt the message\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        encrypt(text, shift);
        printf("\nEncrypted message: %s", text);
    } else if (choice == 2) {
        decrypt(text, shift);
        printf("\nDecrypted message: %s", text);
    } else {
        printf("Invalid choice! Please choose 1 or 2.\n");
    }
    return 0;
}
