#include <stdio.h>
#include <string.h>

int main()
{
    int testCases; // Number of test cases
    scanf("%d", &testCases);

    for (int i = 0; i < testCases; i++)
    {
        int group; // Number of people in the group
        scanf("%d", &group);

        char firstLanguage[21]; // Language spoken by the first user; minimum 1, maximum 20 characters (plus '\0'); used here for string comparison later

        scanf("%s", firstLanguage); // Read the language of the first user

        int sameLanguage = 1; // Everyone speaks the same language

        for (int j = 1; j < group; j++) // Start from j = 1 because we've already read the first language above
        {
            char languages[21];

            scanf("%s", languages);

            if (strcmp(firstLanguage, languages) != 0)
            {
                sameLanguage = 0; // At least someone speaks a different language
            }    
        }

        if (sameLanguage) // Everyone speaks the same language
        {
            printf("%s\n", firstLanguage);
        } 
        else
        {
            printf("ingles\n"); // At least one person speaks a different language
        }
        
    }
    return 0;
}

//beecrowd 1581