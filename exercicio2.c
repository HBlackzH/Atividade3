#include<stdio.h>

int main (){
float salario;

printf("\nQual seu salario: ");
scanf("%f", &salario);

if (salario >= 1320){
    printf("\nVoce ganha mais que um salario minimo");
}else{
   printf("\nVoce  ganha menos que um salario minimo");
}

}
