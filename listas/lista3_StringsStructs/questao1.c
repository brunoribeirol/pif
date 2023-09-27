#include <stdio.h>
#include <string.h>

int main()
{
    int testCases; // Number of testCases
    scanf("%d", &testCases);

    getchar(); // Consumes the newline character left in the input buffer after reading testCases

    for (int i = 0; i < testCases; i++)
    {
        char phrase[200]; // 199 + /0

        scanf(" %[^\n]", phrase); // Read a line of text (excluding leading whitespace)

        int countLetters[26] = {0}; // An array to store the count of each letter

        for (int i = 0; i < strlen(phrase); i++)
        {
            char ch = phrase[i];

            // Convert characters to lowercase (assuming ASCII values)
            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 32;
            }

            // Check if the character is a letter (assuming ASCII values)
            if (ch >= 'a' && ch <= 'z')
            {
                countLetters[ch - 'a']++; // Increment the count for the specific letter
            }
        }

        int maxCount = 0;

        for (int i = 0; i < 26; i++)
        {
            if (countLetters[i] > maxCount)
            {
                maxCount = countLetters[i]; // Find the maximum letter count
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (countLetters[i] == maxCount)
            {
                printf("%c", 'a' + i); // Print letters with the maximum count
            }
        }
        printf("\n");
    }

    return 0;
}

//beecrowd 1255