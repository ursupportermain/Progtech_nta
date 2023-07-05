#include <stdio.h>

void zeichenketteGrossInKein(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32; // ASCII-Wert von 'A' zu 'a' addieren
        }
    }
}

int main() {
    char string[100];
    printf("Geben Sie eine Zeichenkette ein: ");
    scanf("%s", string);
    zeichenketteGrossInKein(string);
    printf("Die umgewandelte Zeichenkette lautet: %s\n", string);
    return 0;
}
