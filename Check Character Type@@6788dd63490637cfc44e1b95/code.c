#include <stdio.h>

int main() {
    char ad;
    scanf("%c", &ad);

    // Check if it's a digit
    if (ad >= '0' && ad <= '9') {
        printf("Digit\n");
    } 
    // Check if it's an alphabet
    else if ((ad >= 'A' && ad <= 'Z') || (ad >= 'a' && ad <= 'z')) {
        // Convert to lowercase manually
        if (ad >= 'A' && ad <= 'Z') {
            ad = ad + 32;  // Convert uppercase to lowercase
        }

        // Check for vowels
        if (ad == 'a' || ad == 'e' || ad == 'i' || ad == 'o' || ad == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    // Otherwise, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
