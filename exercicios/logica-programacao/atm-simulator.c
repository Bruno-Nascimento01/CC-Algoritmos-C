#include <stdio.h>
#include <stdlib.h>
int main () {

int notas[4]={100,50,20,10},quantidade[4],valor,i;

printf("Digite o valor que voce deseja sacar💸 : ");
scanf("%d",&valor);

if(valor %10 !=0){
printf("\nValor invalido!, voce so pode sacar valores multiplos de 10 😉");

}else{
for(i=0; i<4; i++){
quantidade[i]= valor/notas[i];

valor %= notas[i];

}
for(i=0; i<4; i++){
printf("\nnotas:%d quantidade:%d💸 ",notas[i],quantidade[i]);
}

}return 0;




    return 0;
}
