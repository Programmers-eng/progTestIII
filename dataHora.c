#include <stdio.h>
#include <string.h>
char frase[30];

int main(){
    strcat(frase,"Data: ");
    strcat(frase,__DATE__);
    strcat(frase,"\nHoras: ");
    strcat(frase,__TIME__);
    printf("%s",frase);

    return 0;
}