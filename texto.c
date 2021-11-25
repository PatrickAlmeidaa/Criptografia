#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "texto.h"

void ler_texto(int n){
    unsigned short t, tm;
    char* texto = malloc(10 * sizeof(char*));
    
    for (int i = 0; i < n; i++){
        fflush(stdin);
        fgets(texto, 15, stdin);
        //scanf("%[^\n]", texto);
        //printf("1\n");
        t = strlen(texto);
        tm = t%2;
        printf("%s\n", modifica_meio(inverte_texto(troca_letras(texto, t, 0), 0, t-1), tm, t - 1));
    } 
    free(texto);
}

char* troca_letras(char* texto, int t, int cont){
    if(cont < t){
        if((texto[cont] >= 'A' && texto[cont] <= 'Z') || (texto[cont] >= 'a' && texto[cont] <= 'z')){
            texto[cont] = texto[cont] + 3;
            return troca_letras(texto, t, cont++);
        }
    }
    return texto;
}
char* inverte_texto(char* texto, int cont, int t){
    if((t - cont) > 0){
        char aux = texto[t];
        texto[t] = texto[cont];
        texto[cont] = aux;
        inverte_texto(texto, cont+1, t-1);
    }
    return texto;
}
char* modifica_meio(char* texto, int tm, int t){
    if (tm <= t){
        if ((texto[tm] >= 32 && texto[tm] <= 176)){
            texto[tm] = texto[tm] - 1;
            modifica_meio(texto, tm++, t);
        }
    }
    return texto;
}