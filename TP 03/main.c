#include <stdio.h>
#include <string.h>

int main() {
    char feedback[50];
    int contapos = 0;
    int contaneg = 0;

    fgets(feedback, 50, stdin);

    for (int i = 0; i < strlen(feedback) - 1; i++) {
        if ((feedback[i] == ':' && feedback[i + 1] == ')') ||
            (i < strlen(feedback) - 2 && feedback[i] == ':' && feedback[i + 1] == '-' && feedback[i + 2] == ')') ||
            (feedback[i] == ':' && feedback[i + 1] == 'D') ||
            (feedback[i] == 'X' && feedback[i + 1] == 'D') ||
            (feedback[i] == '>' && feedback[i + 1] == '3') ||
            (i < strlen(feedback) - 2 && feedback[i] == '^' && feedback[i + 1] == '-' && feedback[i + 2] == '^') ||
            (feedback[i] == ':' && feedback[i + 1] == '3') ||
            (i < strlen(feedback) - 2 && feedback[i] == '\\' && feedback[i + 1] == 'o' && feedback[i + 2] == '/') ||
            (feedback[i] == ';' && feedback[i + 1] == ')') ||
            (feedback[i] == ':' && feedback[i + 1] == '*')) {
            contapos++;
        }
        if ((feedback[i] == ':' && feedback[i + 1] == '(') ||
            (i < strlen(feedback) - 2 && feedback[i] == ':' && feedback[i + 1] == '-' && feedback[i + 2] == '(') ||
            (feedback[i] == ':' && feedback[i + 1] == 'P') ||
            (i < strlen(feedback) - 2 && feedback[i] == ':' && feedback[i + 1] == '*' && feedback[i + 2] == '(') ||
            (i < strlen(feedback) - 2 && feedback[i] == ':' && feedback[i + 1] == '\'' && feedback[i + 2] == '(') ||
            (feedback[i] == ':' && feedback[i + 1] == 'S') ||
            (feedback[i] == ':' && feedback[i + 1] == '\'') ||
            (i < strlen(feedback) - 2 && feedback[i] == '>' && feedback[i + 1] == ':' && feedback[i + 2] == '(') ||
            (i < strlen(feedback) - 2 && feedback[i] == '>' && feedback[i + 1] == ':' && feedback[i + 2] == ')') ||
            (i < strlen(feedback) - 2 && feedback[i] == '<' && feedback[i + 1] == ':' && feedback[i + 2] == '-') ||
            (i < strlen(feedback) - 2 && feedback[i] == 'O' && feedback[i + 1] == '_' && feedback[i + 2] == 'o')) {
            contaneg++;
        }

    }

    if(contapos > contaneg){
        printf("Positiva\n");
    }else if(contapos < contaneg){
        printf("Negativa\n");
    }else{
        printf("Neutra\n");
    }


    return 0;
}
