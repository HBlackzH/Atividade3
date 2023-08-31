#include<stdio.h>

int main (){
int idade;

printf("\nQual sua idade: ");
scanf("%d", &idade);

if (idade >= 18){
    printf("\nVoce e maior de idade");
}else{
   printf("\nVoce e menor de idade");
}

}
