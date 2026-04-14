
#include<stdio.h>
#include<stdlib.h>

int main(){
char escolha;
int contador,contagem_sim;

printf("\nDigite apenas S para sim e N para não");



printf("\nVoce telefonou para a vitima?");
scanf("%c", &escolha);
if(escolha == 's'|| escolha == 'S'){
contagem_sim=contagem_sim+1;
}
printf("\nVoce esteve no local do crime?: ");
scanf("%c", &escolha);
if(escolha == 's' || escolha == 'S'){
contagem_sim=contagem_sim+1;
}
printf("\nVoce mora perto da vitima?");
scanf("%c", &escolha);
if(escolha == 's'|| escolha == 'S'){
contagem_sim=contagem_sim+1;
}
printf("\nVoce devia para a vitima?: ");
scanf("%c", &escolha);
if(escolha == 's'|| escolha == 'S'){
contagem_sim=contagem_sim+1;
}
printf("\nVoce ja trabalhou com a vitima?: ");
scanf("%c", &escolha);
if(escolha == 's' || escolha == 'S'){
contagem_sim=contagem_sim+1;

}

if(contagem_sim<=1){
printf("---Inocente---");
}else if(contagem_sim==2){ printf("---Suspeito");

}else if (contagem_sim==3 && contagem_sim==4){printf("cumplice");
}else{printf("Assasino");}

return 0;
}
