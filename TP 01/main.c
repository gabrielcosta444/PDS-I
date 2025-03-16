#include <stdio.h>

int main(void){
    int n9, n8, n7, n6, n5, n4, n3, n2, n1, somaprodutos, n1ver, n2ver, somaprodutosver;
    long long int cpf;
    printf("Digite um número de cpf sem o dígito verificador:\n");
    scanf("%lld", &cpf);

    n9 = cpf / 100000000;
    n8 = (cpf % 100000000) / 10000000;
    n7 = ((cpf % 100000000) % 10000000) / 1000000;
    n6 = (((cpf % 100000000) % 10000000) % 1000000) / 100000;
    n5 = ((((cpf % 100000000) % 10000000) % 1000000) % 100000) / 10000;
    n4 = (((((cpf % 100000000) % 10000000) % 1000000) % 100000) % 10000) / 1000;
    n3 = ((((((cpf % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) / 100;
    n2 = (((((((cpf % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) / 10;
    n1 = ((((((((cpf % 100000000) % 10000000) % 1000000) % 100000) % 10000) % 1000) % 100) % 10) / 1;

    somaprodutos = (2*n1) + (3*n2) + (4*n3) + (5*n4) + (6*n5) + (7*n6) + (8*n7) + (9*n8) + (10*n9);

    if(somaprodutos % 11 == 0 || somaprodutos % 11 == 1){
        n2ver = 0;
    }else{
        n2ver = 11 - (somaprodutos % 11);
    }

    somaprodutosver = (2*n2ver) + (3*n1) + (4*n2) + (5*n3) + (6*n4) + (7*n5) + (8*n6) + (9*n7) + (10*n8) + (11*n9);

    if(somaprodutosver % 11 == 0 || somaprodutosver % 11 == 1){
        n1ver = 0;
    }else{
        n1ver = 11 - (somaprodutosver % 11);
    }

    printf("%d %d", n2ver, n1ver);





    return 0;
}
