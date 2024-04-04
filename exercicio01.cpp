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
    


int main (){
    exercicio01();
    //exercicio02();
    return 0;
}









