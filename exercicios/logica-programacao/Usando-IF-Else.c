#include <stdio.h>
#include <stdlib.h>


int main(){

char tamanho;


do{

printf("\nEntre com um tamanho G para grande,M para medio ou F para finalizar o programa: ");
scanf(" %c", &tamanho);

if (tamanho == 'G' || tamanho == 'g'){
printf("O tamanho é gigante");
}else if( tamanho == 'M' || tamanho == 'm'){
printf("O tamanho é medio");
}else if ( tamanho == 'P' || tamanho == 'p'){
printf("O tamanho é pequeno");

}else if ( tamanho == 'f' || tamanho == 'F'){
printf("\nFinalizando...");

}else{
printf("Digite apenas G,M,P ou F");}

} while(tamanho != 'f' && tamanho != 'F'); 

return 0;


}
