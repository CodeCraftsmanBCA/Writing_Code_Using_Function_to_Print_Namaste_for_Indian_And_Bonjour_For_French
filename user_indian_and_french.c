#include<stdio.h>

void printNamaste(); // Function Declaration
void printBonjour();
int main ()
{
    char ch;
    printf("What is your Country name: ");
    scanf("%c", &ch);

    if(ch == 'i') {
        printNamaste(); // Function Call
    } else {
        printBonjour();
    }

    return 0;
}

void printNamaste() {
    printf("Namaste\n"); // Function Definition
}

void printBonjour() {
    printf("Bonjour\n");
}