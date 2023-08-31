#include<stdio.h>

int main (){
float nota;

printf("\nQual sua nota: ");
scanf("%f", &nota);

if (nota >= 7.0){
    printf("\nVoce esta aprovado");
}else if(nota <4){
   printf("\nVoce esta reprovado");
}else if(nota >= 4 < 7){
    printf("\nVoce esta de recuperacao");
}

}
