#include <stdio.h>
struct Book 
{
    char title[100];
    char author[50];
    float price;
};

int main() 
{
   int i;
    struct Book b[5];
    struct Book *ptr;
    ptr=0;
    for (i = 0; i < 5; i++) 
	{
        printf("Enter details for Book %d\n", i + 1);
        printf("Title: ");
        scanf(" %99[^\n]", (ptr + i)->title); 
        printf("Author: ");
        scanf(" %49[^\n]", (ptr + i)->author);
        printf("Price: ");
        scanf("%f", &(ptr + i)->price);
    }
    printf("\n--- Book Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("Book %d: %s by %s, Price: $%.2f\n", 
                i + 1, (ptr + i)->title, (ptr + i)->author, (ptr + i)->price);
    }

    return 0;
}

