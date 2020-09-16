#include<stdio.h>

int user(int num);
int main()
{   
    printf("Hello there!"); // new comment here

    char fname[15];
    printf("\n\nEnter your first name: ");
    scanf("%s", fname);

    char lname[15];
    printf("\nEnter your last name: ");
    scanf("%s", lname);

    printf("\nWelcome %s %s! I am here to let you know if you're legal here or not!\n", fname, lname);

    int age;
    printf("\nHow old are you? ");
    scanf("%d", &age);
    user(age);

    printf("\n\nGoodbye %s... Thanks for taking my survey!", fname);

    return 0;
}

int user(int num)
{
    if(num <19)
        printf("\nSorry you are not legal in Kelowna :(");
    else if (num <100)
        printf("\nGood News! You are legal!!! \nHave fun going out in Kelowna!!!");
    else
        printf("\nNo way you're over 100 years of age...");

    return 0;
}