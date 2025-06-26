/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
*/

#include <stdio.h>
#define MAX_WORD_LENGTH 10

int main(void)
{
    int c;
    int currentWordLength = 0;
    int wordLengths[MAX_WORD_LENGTH];

    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        wordLengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (currentWordLength > 0)
            {
                if (currentWordLength <= MAX_WORD_LENGTH) // prevent overflow
                {
                    wordLengths[currentWordLength - 1]++;
                }
                currentWordLength = 0;
            }
        }
        else
        {
            currentWordLength++;
        }
    }

    printf("Word length horizontal histogram (max %d):\n", MAX_WORD_LENGTH);
    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        printf("%2d: ", i + 1);
        for (int j = 0; j < wordLengths[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("Word length vertical histogram (max %d):\n", MAX_WORD_LENGTH);
    int verticalMax = 0;
    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        if (wordLengths[i] > verticalMax)
        {
            verticalMax = wordLengths[i];
        }
    }

    for (int i = verticalMax; i > 0; i--)
    {
        for (int j = 0; j < MAX_WORD_LENGTH; j++)
        {
            if (wordLengths[j] >= i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= MAX_WORD_LENGTH; i++)
    {
        printf("--");
    }
    printf("\n");
    for (int i = 1; i <= MAX_WORD_LENGTH; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

/*
this is just some sample text for testing
Word length horizontal histogram (max 10):
 1:
 2: *
 3: *
 4: ****
 5:
 6: *
 7: *
 8:
 9:
10:

Word length vertical histogram (max 10):
      *
      *
      *
  * * *   * *
--------------------
1 2 3 4 5 6 7 8 9 10
*/
