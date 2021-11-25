#ifndef texto_h
#define texto_h

#include <stdio.h>

void ler_texto(int n);
char* troca_letras(char* texto, int t, int cont);
char* inverte_texto(char* texto, int cont, int t);
char* modifica_meio(char* texto, int tm, int t);
#endif