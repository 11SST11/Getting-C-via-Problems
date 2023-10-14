#include <stdio.h>
int main() {
    char vow;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet:- ");
    scanf("%c", &vow);

    // evaluates to 1 if variable vow is a lowercase vowel
    lowercase_vowel = (vow== 'a' || vow == 'e' || vow == 'i' || vow == 'o' || vow == 'u');

    // evaluates to 1 if variable vow is a uppercase vowel
    uppercase_vowel = (vow == 'A' || vow == 'E' || vow == 'I' || vow == 'O' || vow == 'U');

    // evaluates to 1 (true) if vow is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel!", vow);
    else
        printf("%c is a consonant!", vow);
    return 0;
}
