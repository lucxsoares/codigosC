#include <stdio.h>

printf("'n");
hora = (int )numHora; /*parte inteira*/
min = (numHora - (int)numHora) * 100; /*parte decimal*/

if((hora>23 II hora<0) || (min>59 || min<0)){
printf("A parte inteira representa a hora. Assim ela só pode ir de 0 a 23. \n");
printf("A parte decimal representa os minutos. Assim ela só pode ir de 0 a 59. (n");
]else{
minTotal = hora*60 + min;
segTotal = minTotal*60;
printf("A hora que você digitou equivale a d minutos ou d segundos." , minTotal, segTotal
I
return 0;
}