#include<stdio.h>
#include<stdlib.h>

int main(){

int corinthians=0,palmeiras=0,saopalo=0,santos=0,escolha=0,contador=0;

for(contador=1; contador<=5; contador++){
printf("\n⚽Para qual time voce torce?, digite: \n1 = Corinthians👑;\n2 = Palmeiras;\n3 = São Paulo; \n4 = Santos\nEscolha:");
scanf("%d",&escolha);

if(escolha==1){
corinthians=corinthians+escolha;

}else if (escolha==2){
palmeiras=palmeiras+(escolha-1);
}else if (escolha==3){
saopalo=saopalo+(escolha-2);
}else if(escolha==4){
santos=santos+(escolha-3);
}else{printf("\n 💀escolha invalida digite apenas 1,2,3 e 4: \n");

}
}
printf("\nCorinthians👑 = %d🙋🏾🔥 \nPalmeiras = %d🙋🔥\nSao Paulo = %d🔥\nSantos = %d🔥\n",corinthians,palmeiras,saopalo,santos);
return 0;
}
