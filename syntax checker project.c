#include <stdio.h>

int main() {
    char expr[100];
    int round = 0, curly = 0, square = 0;
    int i;

    printf("Enter an expression: ");
    scanf("%s", expr);

    for (i = 0; expr[i] != ''; i++) {
        if (expr[i] == '(')
            round++;
        else if (expr[i] == ')')
            round--;
        else if (expr[i] == '{')
            curly++;
        else if (expr[i] == '}')
            curly--;
        else if (expr[i] == '[')
            square++;
        else if (expr[i] == ']')
            square--;
    }

    if (round == 0 && curly == 0 && square == 0)
        printf("Syntax is correct");
    else
        printf("Syntax is incorrect");

    return 0;
}
