#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
int segundos=0,minutos=0,horas=0;

while(1){
system("clear");
segundos++;

if(segundos == 60){
minutos++;
segundos=0;}

if(minutos== 60){
minutos++;
minutos=0;
}
if(horas == 60){
horas++;
horas=0;
}
printf("%.2d:%.2d:%.2d \n",horas,minutos,segundos);
sleep(1);

}
return 0;
}
