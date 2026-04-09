#include <stdio.h>
#include <stdlib.h>

int main(){
double peso,altura,imc;

printf("*********Qualcule o seu IMC**************");
printf("\nEntre com o seu peso: ");
scanf("%lf",&peso);

printf("Entre com a altura: ");
scanf("%lf",&altura);

imc=peso/(altura*altura);

if(imc<=18.5){
printf("O seu imc é %lf, voce esta abaixo do peso",imc);
}else if(imc>=18.6 && imc<24.9){
printf("O seu peso é %.2lf, voce esta no peso ideal",imc);
}else{
printf("O seu peso é %.2lf, voce esta acima do peso",imc);
}

return 0;
}
