#include <stdio.h>

int main()
{
    float p=0, a=0, imc=0;
    
    printf("Informe seu peso(Kg): ");
    scanf("%f",&p);
    
    printf("Informe sua altura(m): ");
    scanf("%f",&a);
    
    imc=p/(a*a);
    
    printf("Seu IMC é: %.2f \n", imc);
    
    if(imc<18.5){
        printf("Ta puro osso.");
    }
    
    if(imc>18.5 && imc<=24.9){
        printf("Ta na média, nem gordo nem magro.");
    }
    
    if(imc>25 && imc<=29.9){
        printf("Ta um pouco acima da média, gordinho.");
    }
    
    if(imc>30 && imc<=39.9){
        printf("tropa do gordao.");
    }
    
    if(imc>=40){
        printf("Ta tao redondo que o pirata te ve e te coloca no canhão.");
    }
    
	printf("\n");
    return 0;
}
