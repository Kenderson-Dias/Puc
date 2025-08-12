#include <iostream>
#include <cstdlib>
#include <cstring>

class Livro{
protected:
    char titulo[100];
    char autor[100];
    char ISBN[20];
    int status;
public:
    Livro (char t, char a, char i){
        if(strlen(t) > 0){
            strcpy(titulo, t);
        }
        if(strlen(a) > 0){
            strcpy(autor, a);
        }
        if(strlen(i) > 0){
            strcpy(ISBN, i);
        }
        status = 0

        char* getTitulo() { return titulo; }
        char* getAutor() { return autor; }
        char* getISBN() { return ISBN; }
        char getStatus() { return status; }

        void setTitulo(char t){
            if(strlen(t) > 0){
                strcpy(titulo, t);
            }
        }
        void setAutor(char a){
            if(strlen(a) > 0){
                strcpy(autor, a);
            }
        }
        void setISBN(char i){
            if(strlen(i) > 0){
                strcpy(ISBN, i);
            }
        }
        void setStatus(int s){
            status = s;
        }
    }
};

class Membro{
protected:
    char nome[100];
    char id[50];
public:
    virtual void mostraLimites(){
        cout <<"Importante: \nO Perfil X pode pegar no maximo Y livros";
    }
};

class Estudante: public Membro{
protected:
    void mostraLimites() override{
        cout <<"Importante: \nO Perfil Estudante pode pegar no maximo 4 livros";
    }
};

class Professor: public Membro{
    void mostraLimites() override{
        cout <<"Importante: \nO Perfil Professor pode pegar no maximo 8 livros";
    }
};

class Visitante: public Membro{
    void mostraLimites() override{
        cout <<"Importante: \nO Perfil Visitante pode pegar no maximo 2 livros";
    }
};