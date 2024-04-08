#include <iostream>

int exercicio01(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num > 10){
        printf("O número é maior que dez.");
    }


    return 0;
}

int exercicio02(){

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num == 0){
      printf("O número é zero.\n");
    }

    return 0;

}

int exercicio03(){

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


int exercicio04(){

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

    


int main (){
    exercicio01();
    //exercicio02();
    //exercicio03();
    //exercicio04();
    return 0;
}









