#include <stdio.h>

int main(void)
{
    char FirstAlphabet, SecondAlphabet;

    printf("Enter an alphabet : ");
    scanf("%c", &FirstAlphabet);

    SecondAlphabet = FirstAlphabet + 1;

    printf("The next alphabet of %c (%d) is %c (%d)\n", FirstAlphabet, FirstAlphabet, SecondAlphabet, SecondAlphabet);
    return 0;  
}

