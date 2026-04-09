
#include <stdlib.h>

int main() {

    int contador=1;

    int senha=102015,senha_digitada;
    while (senha!=senha_digitada){
    printf("\n#######Digite a senha########\n");
    scanf("%d",&senha_digitada);
    if(senha==senha_digitada){
    printf("\n#######Login efetuado na %dº tetativa#######\n",contador);
    }else{
    contador++;
    printf("\nSenha invalida! %dºtentativa, digite novamente",contador);
    } if(contador>3){
    printf("\nSistema bloqueado");
    break;
    }



    }
       return 0;
    }
