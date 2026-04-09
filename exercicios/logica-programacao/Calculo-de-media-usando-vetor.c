#include<stdio.h>
#include<stdlib.h>

int main(){
double notas[5],soma=0,media;
int i=0;
char aluno[40];

printf("Entre com o nome do aluno: ");
scanf("%s",aluno);
for(i=0; i<5; i++){
printf("Entre com a %dª do aluno %s: ",i+1,aluno);
scanf("%lf", &notas[i]);
soma=soma+notas[i];

}

media=soma/5;

printf("\ -----A media do aluno %s é %.2lf-----",aluno,media);

return 0;
}
