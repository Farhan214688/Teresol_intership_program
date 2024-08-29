/*

1.1
1. create a file and write contents into it and save it


#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;

    fptr = fopen("example.txt", "w");

    if (fptr == NULL)
    {
        printf("Error: Could not create the file.\n");

    }

    fprintf(fptr, "this is my first file writing task!\n");



    fclose(fptr);

    // Inform the user that the file has been created successfully
    printf("File created and content written successfully.\n");

    return 0;
}*/

/****************************************************************************************************** */
/*

1.2
2. read file contents and display them on the console.



#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;

    fptr = fopen("example.txt", "r");

    if (fptr == NULL)
    {
        printf("File is empty\n");
    }

    char mystring[100];
    fgets(mystring, 100, fptr);

    printf("%s", mystring);

    return 0;
}*/

/******************************************************************************* */

/*

1.3
3. read numbers from a file and write even, odd and prime numbers to separate files.




#include <stdio.h>
#include <stdlib.h>

// Function to check if a number is prime
int is_prime(int num)
{
    // Check for numbers less than 2
    if (num < 2)
        return 0; // Not prime

    // Check for 2 and 3
    if (num == 2 || num == 3)
        return 1; // Prime

    // Check for even numbers
    if (num % 2 == 0)
        return 0; // Not prime

    // Check for odd factors from 3 to the square root of num
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}
int main()
{
    FILE *fptr, *even, *odd, *prime;
    int num;

    // Open the input file
    fptr = fopen("example.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Open the output files
    even = fopen("even.txt", "w");
    odd = fopen("odd.txt", "w");
    prime = fopen("prime.txt", "w");

    // Read numbers from the input file and write to the respective output files
    while (fscanf(fptr, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(even, "%d\n", num);
        }
        else
        {
            fprintf(odd, "%d\n", num);
        }

        if (is_prime(num))
        {
            fprintf(prime, "%d\n", num);
        }
    }

    // Close the files
    fclose(fptr);
    fclose(even);
    fclose(odd);
    fclose(prime);

    printf("Numbers written to files successfully.\n");
    return 0;
}*/

/******************************************************************************************** */

/*

1.4
append content to a file.

#include <stdio.h>

int main()
{
    FILE *file;
    char *filename = "example.txt";
    char *content = "This is the appended content.\n";

    file = fopen(filename, "a");
    if (file == NULL)
    {
        printf("Could not open file %s for appending.\n", filename);
        return 1;
    }


    fprintf(file, "%s", content);
    printf("Content appended to %s successfully.\n", filename);

    fclose(file);

    return 0;
}*/

//*************************************************************************
/*
1.5 compare two files.

// C program to compare two files character by character.

#include <stdio.h>
#include <stdlib.h>

    int
    compareFile(FILE *fPtr1, FILE *fPtr2, int *line, int *col)
{
    char ch1, ch2;

    *line = 1;
    *col = 0;

    do
    {

        ch1 = fgetc(fPtr1);
        ch2 = fgetc(fPtr2);

        //Increment line and reset column on newline
        if (ch1 == '\n')
        {
            (*line)++;
            *col = 0;
        }

        // If characters are not the same, return -1
        if (ch1 != ch2)
        {
            return -1;
        }

        (*col)++;
    } while (ch1 != EOF && ch2 != EOF);

    //If both files have reached the end
    if (ch1 == EOF && ch2 == EOF)
    {
        return 0; // Files are equal
    }
    else
    {
        return -1; // Files are not equal in length
    }
}

int main()
{
    //File pointers to hold references to the input files
    FILE *fPtr1;
    FILE *fPtr2;

    //Hardcoded paths for the files to compare
    const char *path1 = "even.txt"; // Change this to the first file path
    const char *path2 = "odd.txt";  // Change this to the second file path

    int diff;
    int line, col;

    //Open both files for comparison
    fPtr1 = fopen(path1, "r");
    fPtr2 = fopen(path2, "r");

    //Check if files opened successfully
    if (fPtr1 == NULL || fPtr2 == NULL)
    {
        printf("\nUnable to open one or both files.\n");
        printf("Please check if the files exist and you have read privileges.\n");
        exit(EXIT_FAILURE);
    }

    // Call function to compare files
    diff = compareFile(fPtr1, fPtr2, &line, &col);

    if (diff == 0)
    {
        printf("\nBoth files are equal.\n");
    }
    else
    {
        printf("\nFiles are not equal.\n");
        printf("Difference found at Line: %d, Column: %d\n", line, col);
    }

    // Close files to release resources
    fclose(fPtr1);
    fclose(fPtr2);

    return 0;
}*/

/*
6. copy contents from one file to another file.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *sourceFile;
    FILE *destinationFile;
    char sourcePath[] = "odd.txt";
    char destinationPath[] = "even.txt";
    char ch;


    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL)
    {
        printf("Error: Could not open source file %s.\n", sourcePath);
        return 1;
    }


    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL)
    {
        printf("Error: Could not open destination file %s.\n", destinationPath);
        fclose(sourceFile);
        return 1;
    }


    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    printf("Contents copied from %s to %s successfully.\n", sourcePath, destinationPath);

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
*/

/*
1.7

7. merge two files to a third file


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1;
    FILE *file2;
    FILE *mergedFile;
    char file1Path[] = "even.txt";
    char file2Path[] = "odd.txt";
    char mergedFilePath[] = "prime.txt";
    char ch;

    file1 = fopen(file1Path, "r");
    if (file1 == NULL)
    {
        printf("Error: Could not open file %s.\n", file1Path);
        return 1;
    }


    file2 = fopen(file2Path, "r");
    if (file2 == NULL)
    {
        printf("Error: Could not open file %s.\n", file2Path);
        fclose(file1);
        return 1;
    }


    mergedFile = fopen(mergedFilePath, "w");
    if (mergedFile == NULL)
    {
        printf("Error: Could not open merged file %s.\n", mergedFilePath);
        fclose(file1);
        fclose(file2);
        return 1;
    }


    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, mergedFile);
    }

    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, mergedFile);
    }

    printf("Contents of %s and %s merged into %s successfully.\n", file1Path, file2Path, mergedFilePath);

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    return 0; // Exit the program successfully
}*/

/************************************************************* */

/*
1.8
C program to count characters, words and lines in a text file.


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char file1Path[] = "prime.txt";
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 1;
    int inWord = 0;

    file = fopen(file1Path, "r");
    if (file == NULL)
    {
        printf("Error: Could not open file %s.\n", file1Path);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        charCount++;
        if (isspace(ch))
        {
            if (inWord)
            {
                wordCount++;
                inWord = 0;
            }
            if (ch == '\n')
            {
                lineCount++;
            }
        }
        else
        {
            inWord = 1;
        }
    }

    if (inWord)
    {
        wordCount++;
    }

    printf("Characters in file: %d\n", charCount);
    printf("Words in file: %d\n", wordCount);
    printf("Lines in file: %d\n", lineCount);

    fclose(file);

    return 0;
}*/

/***************************************************************** */

/*
1.9
9. remove a word from a text file.


#include <stdio.h>
#include <string.h>

void removeWordFromFile(const char *filename, const char *word)
{
    FILE *file, *tempFile;
    char buffer[1024];
    char *pos;

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open file %s for reading.\n", filename);
        return;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Could not open temporary file for writing.\n");
        fclose(file);
        return;
    }

    while ((fgets(buffer, sizeof(buffer), file)) != NULL)
    {

        while ((pos = strstr(buffer, word)) != NULL)
        {
            memmove(pos, pos + strlen(word), strlen(pos + strlen(word)) + 1);
        }

        fputs(buffer, tempFile);
    }

    fclose(file);
    fclose(tempFile);

    remove(filename);
    rename("temp.txt", filename);

    printf("Word '%s' has been removed from the file '%s'.\n", word, filename);
}

int main()
{

    const char *filename = "prime.txt";
    const char *word = "17";

    removeWordFromFile(filename, word);

    return 0;
}
*/

/*
1.10
10. remove specific lines from a text file.

*/

#include <stdio.h>
#include <stdlib.h>

void removeLinesFromFile(const char *filename, int linesToRemove[], int numLines)
{
    FILE *file, *tempFile;
    char buffer[1024];
    int currentLine = 1;
    int i, removeFlag;


    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open file %s for reading.\n", filename);
        return;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Could not open temporary file for writing.\n");
        fclose(file);
        return;
    }


    while ((fgets(buffer, sizeof(buffer), file)) != NULL)
    {
        removeFlag = 0;


        for (i = 0; i < numLines; i++)
        {
            if (currentLine == linesToRemove[i])
            {
                removeFlag = 1;
                break;
            }
        }

        if (!removeFlag)
        {
            fputs(buffer, tempFile);
        }

        currentLine++;
    }


    fclose(file);
    fclose(tempFile);


    remove(filename);
    rename("temp.txt", filename);

    printf("Specified lines have been removed from the file '%s'.\n", filename);
}

int main()
{

    const char *filename = "example.txt"; 


    int linesToRemove[] = {2, 4, 6}; 
    int numLines = sizeof(linesToRemove) / sizeof(linesToRemove[0]);

    removeLinesFromFile(filename, linesToRemove, numLines);

    return 0;
}
