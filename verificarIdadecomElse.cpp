#include <iostream>

int exercicio01(){

//Verificar maioridade

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Você é maior de idade.\n");
    }else{
        printf("Você é menor de idade.\n)");
    }

    return 0;

}

int exercicio02(){

//Verificar paridade

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 ==0){
        printf("O número é par.\n");
    }else{
        printf("O número é impar.\n");
    }


    return 0;
}


int exercicio03(){

//Verificar positividade

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 0){
        printf("O número é positivo.\n");
    }else{
        printf("O número é negativo.\n");
    }


    return 0;
}


int exercicio04(){

//Verificar se é negativo

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num < 0){
        printf("O número é negativo.\n");
    }else{
        printf("O número é positivo ou zero.\n");
    }

    return 0;
}


int exercicio05(){

    //Verificar paridade

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 ==0){
        printf("O número é par.\n");
    }else{
        printf("O número é impar.\n");
    }


    return 0;
}






int main(){
    //exercicio01();
    //exercicio02();
    //exercicio03();
    //exercicio04();
    //exercicio05();
}