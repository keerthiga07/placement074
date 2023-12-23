#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateCombinations(char** combinations, char* digits, char** mapping, int digitsLen, int* combCount, char* current, int pos) {
    if (pos == digitsLen) {
        current[pos] = '\0';
        combinations[*combCount] = strdup(current);
        (*combCount)++;
        return;
    }

    char* letters = mapping[digits[pos] - '0'];
    int lettersLen = strlen(letters);

    for (int i = 0; i < lettersLen; i++) {
        current[pos] = letters[i];
        generateCombinations(combinations, digits, mapping, digitsLen, combCount, current, pos + 1);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    if (digits == NULL || *digits == '\0') {
        *returnSize = 0;
        return NULL;
    }

    char* mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int digitsLen = strlen(digits);
    int combCount = 0;

    int totalCombinations = 1;
    for (int i = 0; i < digitsLen; i++) {
        if (digits[i] < '2' || digits[i] > '9') {
            *returnSize = 0;
            return NULL;
        }
        int lettersLen = strlen(mapping[digits[i] - '0']);
        if (lettersLen == 0) {
            *returnSize = 0;
            return NULL;
        }
        totalCombinations *= lettersLen;
    }

    char** combinations = (char*)malloc(totalCombinations * sizeof(char));
    char* current = (char*)malloc((digitsLen + 1) * sizeof(char));

    generateCombinations(combinations, digits, mapping, digitsLen, &combCount, current, 0);

    free(current);
    *returnSize = combCount;
    return combinations;
}

int main() {
    char digits[100];

    printf("Enter the digits: ");
    scanf("%s", digits);

    int returnSize;
    char** result = letterCombinations(digits, &returnSize);

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", result[i]);
        if (i < returnSize - 1) {
            printf(",");
        }
        free(result[i]);
    }
    printf("]\n");

    free(result);

    return 0;
}
