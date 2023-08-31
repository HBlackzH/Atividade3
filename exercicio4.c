#include<stdio.h>

int main (){
float peso;

printf("\nQual seu peso: ");
scanf("%f", &peso);

if (peso >= 60){
    printf("\nVoce e mais pesado que 60kg");
}else{
   printf("\nVoce e mais leve que 60kg");
}

}
