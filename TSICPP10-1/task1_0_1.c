/*

1.11
11. remove empty lines from a text file.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *input_file, *temp_file;
    char c;
    int is_empty_line = 1;

    input_file = fopen("example.txt", "r");
    if (input_file == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    temp_file = fopen("temp.txt", "w");
    if (temp_file == NULL)
    {
        printf("Error opening temporary file.\n");
        fclose(input_file);
        return 1;
    }

    while ((c = fgetc(input_file)) != EOF)
    {

        if (c == '\n')
        {

            if (!is_empty_line)
            {
                fputc(c, temp_file);
            }

            is_empty_line = 1;
        }
        else
        {

            fputc(c, temp_file);
            is_empty_line = 0;
        }
    }

    fclose(input_file);
    fclose(temp_file);

    remove("input.txt");

    rename("temp.txt", "example.txt");

    printf("Empty lines removed successfully.\n");
    return 0;
}*/

/********************************************************************************** */

/*

1.11
11. remove empty lines from a text file.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *input_file, *temp_file;
    char c;
    int is_empty_line = 1;

    input_file = fopen("example.txt", "r");
    if (input_file == NULL)
    {
        printf("Error opening input file.\n");
        return 1;
    }

    temp_file = fopen("temp.txt", "w");
    if (temp_file == NULL)
    {
        printf("Error opening temporary file.\n");
        fclose(input_file);
        return 1;
    }

    while ((c = fgetc(input_file)) != EOF)
    {

        if (c == '\n')
        {

            if (!is_empty_line)
            {
                fputc(c, temp_file);
            }

            is_empty_line = 1;
        }
        else
        {

            fputc(c, temp_file);
            is_empty_line = 0;
        }
    }

    fclose(input_file);
    fclose(temp_file);

    remove("input.txt");

    rename("temp.txt", "example.txt");

    printf("Empty lines removed successfully.\n");
    return 0;
}*/

/*

1.12
12. r. count occurrences of a word in a text file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    FILE *file;
    char word[50];
    char buffer[1000];
    int count = 0;

    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the word to search for: ");
    scanf("%s", word);

    while (fgets(buffer, sizeof(buffer), file))
    {
        char *ptr = buffer;
        while ((ptr = strstr(ptr, word)) != NULL)
        {
            count++;
            ptr += strlen(word);
        }
    }


    fclose(file);

    printf("The word '%s' appears %d times in the file.\n", word, count);
    return 0;
}*/

/****************************************************/
/*
1.13
13. r. count occurrences of a word in a text file



#include <stdio.h>
#include <stdlib.h>



int main()
{
    FILE *file, *tempFile;
    char line[1000];
    char oldWord[50];
    char newWord[50];
    int i, j, k, found;


    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the word to find: ");
    scanf("%s", oldWord);
    printf("Enter the word to replace with: ");
    scanf("%s", newWord);

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Error creating temporary file.\n");
        fclose(file);
        return 1;
    }


    while (fgets(line, sizeof(line), file))
    {
        i = 0; // Index for the current position in the line
        while (line[i] != '\0')
        {

            found = 1; // Assume the word is found
            for (j = 0; oldWord[j] != '\0'; j++)
            {
                if (line[i + j] != oldWord[j])
                {
                    found = 0; // Not found
                    break;
                }
            }

            if (found)
            {

                for (k = 0; newWord[k] != '\0'; k++)
                {
                    fputc(newWord[k], tempFile);
                }

                i += j;
            }
            else
            {

                fputc(line[i], tempFile);
                i++;
            }
        }
    }


    fclose(file);
    fclose(tempFile);

    rename("temp.txt", "example.txt");

    printf("Word '%s' replaced with '%s' successfully.\n", oldWord, newWord);
    return 0;
}*/

/*
1.14

14. replace a specific line in a text file.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    FILE *tempFile;
    char line[1000];
    char newLine[1000];
    int lineNumber, currentLine = 1;

    file = fopen("example", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }


    printf("Enter the line number to replace: ");
    scanf("%d", &lineNumber);
    getchar();
    printf("Enter the new content for line %d: ", lineNumber);
    fgets(newLine, sizeof(newLine), stdin);

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Error creating temporary file.\n");
        fclose(file);
        return 1;
    }


    while (fgets(line, sizeof(line), file))
    {

        if (currentLine == lineNumber)
        {
            fputs(newLine, tempFile);
        }
        else
        {

            fputs(line, tempFile);
        }
        currentLine++;
    }

    fclose(file);
    fclose(tempFile);


    rename("temp.txt", "example.txt");

    printf("Line %d replaced successfully.\n", lineNumber);
    return 0;
}
*/

/*
1.15

15. convert uppercase to lowercase characters and vice versa in a text file.

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

int main()
{
    FILE *file;
    char line[MAX_LINE_LENGTH];

    file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Error creating temporary file.\n");
        fclose(file);
        return 1;
    }

    while (fgets(line, sizeof(line), file))
    {

        for (int i = 0; line[i] != '\0'; i++)
        {

            if (line[i] >= 'A' && line[i] <= 'Z')
            {
                line[i] += 32; // Convert to lowercase
            }

            else if (line[i] >= 'a' && line[i] <= 'z')
            {
                line[i] -= 32; // Convert to uppercase
            }

            fputc(line[i], tempFile);
        }
    }

    // Rename the temporary file to the original file name
    rename("temp.txt", "example.txt");

    printf("Case conversion completed successfully.\n");
    return 0;
}
/*
1.16

16. find properties of a file


#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
    struct stat fileInfo;

    // Specify the file name
    const char *filename = "example.txt";

    if (stat(filename, &fileInfo) != 0)
    {
        perror("Error getting file properties");
        return 1;
    }


    printf("File: %s\n", filename);
    printf("Size: %lld bytes\n", (long long)fileInfo.st_size);
    printf("Last Modification Time: %s", ctime(&fileInfo.st_mtime));
    printf("Number of Hard Links: %lu\n", fileInfo.st_nlink);

    return 0;
}
/*

17. check if a file exists


#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("input.txt", "r");


    if (file != NULL)
    {
        printf("File 'input.txt' exists.\n");
        fclose(file);
    }
    else
    {
        printf("File 'input.txt' does not exist.\n");
    }

    return 0;
}*/


/*

18. Rename a file

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *oldName = "example.txt"; 
    const char *newName = "example1.txt";


    if (rename(oldName, newName) == 0)
    {
        printf("File renamed successfully from '%s' to '%s'.\n", oldName, newName);
    }
    else
    {
        perror("Error renaming file");
    }

    return 0;
}*/