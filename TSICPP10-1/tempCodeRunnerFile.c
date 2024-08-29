/*

1.0
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


/*

1.0
1. create a file and write contents into it and save it

*/

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
    fgets(mystring, fptr);
    while (fptr != NULL)
    {
        printf("%s" , mystring);
    }
    
    return 0;

   
}