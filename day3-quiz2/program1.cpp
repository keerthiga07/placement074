#include <stdio.h>

int main() {
    char s[100], t[100];

   
    printf("Enter the first string: ");
    scanf("%s", s);

    
    printf("Enter the second string: ");
    scanf("%s", t);


    int count[26] = {0};

   
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

  
    int Anagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            Anagram = 0;
            break;
        }
    }

    
    printf("Result: %s\n", Anagram ? "true" : "false");

    return 0;
}
    
    
