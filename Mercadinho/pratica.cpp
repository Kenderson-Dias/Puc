#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

class CadastroDeLocais{
private:
    char nome [100];
    int cordenadaX;
    int cordenadaY;
}
public:
    CadastroDeLocais(char n[], int cx, int cy){
        if(strlen (n) > 2){
            strcpy(nome, n);
        }

    }