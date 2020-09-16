#include<stdio.h>
int main()
{   
    printf("Hello there!");

    char fname[15];
    printf("\n\nEnter your first name: ");
    scanf("%s", fname);

    char lname[15];
    printf("\nEnter your last name: ");
    scanf("%s", lname);

    printf("\nWelcome %s %s! I am here to let you know if you're legal here or not!\n", fname, lname);

    return 0;
}