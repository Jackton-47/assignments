/*
JACKTON SIBUDA 
PA106/G/28758/25
Program that appends book titles to a file and confirms file storage without deletion
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char title[100];

    fptr = fopen("borrowed_books.txt", "a"); 
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    printf("Enter book title: ");
    gets(title);

    fprintf(fptr, "%s\n", title);
    fclose(fptr);

    printf("Book title saved successfully.\n");
    return 0;
}

