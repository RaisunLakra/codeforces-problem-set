#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100 + 1]; // extra space for null character
    fgets(word, sizeof(word), stdin);

    // Remove the newline character if present
    size_t len = strlen(word);
    if (len > 0 && word[len - 1] == '\n')
    {
        word[len - 1] = '\0';
    }

    int uppercase = 0, lowercase = 0;
    int n = strlen(word);

    // Count uppercase and lowercase characters
    for (int i = 0; i < n; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            lowercase++;
        }
        else if (word[i] >= 'A' && word[i] <= 'Z')
        {
            uppercase++;
        }
    }

    // Convert to the appropriate case based on counts
    if (uppercase > lowercase)
    {
        for (int i = 0; i < n; i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] = word[i] - 'a' + 'A'; // Convert lowercase to uppercase
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] - 'A' + 'a'; // Convert uppercase to lowercase
            }
        }
    }

    printf("%s\n", word);

    return 0;
}
