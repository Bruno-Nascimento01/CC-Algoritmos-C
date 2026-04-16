#include<stdio.h>
#include<stdlib.h>

int main(){
char resposta;
do{
system("clear");
printf("\n----------------------------\n");
printf("JOGO DE CLASSIFICAÇÃO ANIMAL\n");
printf("----------------------------\n");

printf("\nPense em um dos animais abaixo🎮​\n");
printf("-->Leão🦁​\n");
printf("-->Cavalo🐎​\n");
printf("-->Homen​🧍\n");
printf("-->Macaco🐒​\n");
printf("-->Morcego🦇​\n");
printf("-->Baleia🐳​\n");
printf("-->Avestruz🦚\n");
printf("-->Pinguim🐧​\n");
printf("-->Pato🦆​\n");
printf("-->Águia🦅\n");
printf("-->Tartaruga🐢​\n");
printf("-->Cobra🐍\n");
printf("-->Crocodilo🐊\n");

printf("Responda apenas S para sim ou N para não\n");

//Rota do animal mamifero//
printf("O animal é mamifero?: ");
scanf(" %c",&resposta);
if(resposta=='s'||resposta=='S'){
printf("\nO mamifero é quadrupede?: ");
scanf(" %c",&resposta);
            if(resposta=='s'|| resposta=='S'){
            printf("\nO mamifero é carnivoro?: ");
            scanf(" %c",&resposta);
                if(resposta=='s'|| resposta=='S'){
                printf("\n-->O animal escolhido é o Leão!🦁​<--");
                }else{ printf("\n-->O animal escolhido é o cavalo!🐎​<--");}
            //rota do mamifero bipede
            }else if(resposta=='n'|| resposta=='N'){
            printf("\nO animal é Bipede?: ");
            scanf(" %c",&resposta);
                    if(resposta=='s'|| resposta=='S'){
                    printf("\nO animal é Onivoro?: ");
                    scanf(" %c",&resposta);
                        if(resposta=='s'|| resposta=='S'){
                        printf("\nO animal escolhido é o Homem!​🧍");
                        }else{printf("\n-->O animal escolhido é o macaco!🐒​<--");}
                //rota do mamifero voador ou aquatico
                    }else if(resposta=='n'||resposta=='N'){
                    printf("O animal é voador?: ");
                    scanf(" %c",&resposta);
                        if(resposta=='S'|| resposta=='s'){
                        printf("-->O animal escolhido é o Morcego!🦇​<--");
                        }else{printf("-->Você escolheu a baleia!🐳​<--");}

                    }


            }
//Rotas das aves
}else if(resposta=='n'||resposta=='N'){
//Rota das aves não-voadoras.
printf("O animal é uma ave?: ");
scanf(" %c",&resposta);
    if(resposta=='s'|| resposta=='S'){
    printf("É uma ave não-voadora?: ");
    scanf(" %c",&resposta);
        if(resposta=='s'|| resposta=='S'){
        printf("É uma ave tropical?: ");
        scanf(" %c",&resposta);
            if(resposta=='s'||resposta=='S'){
            printf("-->À ave escolhida é o Avestruz!🦚​<--");
            }else{printf("-->À ave escolhida é o Pinguim!🐧​<--");}
            //Rota das aves nadadoras.
        }else if(resposta=='n'|| resposta=='N'){
        printf("É uma ave nadadora?: ");
        scanf(" %c",&resposta);
            if(resposta=='s'|| resposta=='S'){
            printf("-->A ave escolhida é o pato!🦆​<--");
            //rota das aves de rapina
            }else{printf("-->A ave escolhida é a Aguia🦅<--");}
        }
    //Rota dos repteis
    }else{
        printf("É um reptil com casco?: ");
        scanf(" %c",&resposta);
            if(resposta=='s'|| resposta=='S'){
            printf("-->O reptil escolhido é a Tartaruga!🐢​<--");
            }else{printf("É um reptil sem patas?: ");
            scanf(" %c",&resposta);
                if(resposta=='s'|| resposta=='S'){
                printf("-->O reptil escolhido é a Cobra!🐍​<--");
                }else{printf("-->O reptil escolhido é o Crocodilo!🐊​<--");}
                }

        }

}



}while(resposta!='f'&& resposta!='F');


return 0;}
