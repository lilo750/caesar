#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc , string argv[])
{
    int k = atoi(argv[1]);
    if (argc != 2)
    {
        printf("you should input to argument expected : ./caesar <number>\n");
        return 1;
    }

    else if (k >= 1)
    {

        char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        int ci = 0;
        string pi = get_string("plaintext:  ") ;

         printf("ciphertext: ");

        for (int i = 0 , length = strlen(pi); i < length ; i++)
        {
            if (isupper(pi[i]))
            {
               pi[i] = pi[i] - 65;
               ci = (pi[i] + k) % 26 ;
               printf("%c", alphabet[ci]);
            }
               else if (islower(pi[i]))
            {
               pi[i] = pi[i] - 97;
               ci = (pi[i] + k) % 26 ;
               printf("%c", tolower(alphabet[ci]));
            }
            else
            {
               printf("%c", pi[i]);
            }

        }
        printf("\n");
        return 0 ;
    }
    else
    {
        printf("you should input a digit number expected : ./caesar <number>\n");
        return 1;
    }


}
