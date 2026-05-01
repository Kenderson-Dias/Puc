#include <iostream>
#include <boolean>
#include <cstring>

using namespace std;

class Livro {
protected:
    char titulo[100];
    char autor[100];
    int isbn;
    bool status;
public:
    Livro() {
        strcpy(titulo, "Nao informado");
        strcpy(autor, "Nao informado");
        isbn = -1;
        status = true;
    }
    Livro(char t[], char a[], int i) {
        if (strlen(t) > 0) {
            strcpy(titulo, t);
        }
        if (strlen(a) > 0) {
            strcpy(titulo, a);
        }
        isbn = i;
    }

    void setTitulo (char t[]){
        this->titulo;
    }
    void setAutor (char a[]){
        this->autor;
    }
    void setIsbn (int i){
        this->isbn;
    }
    void setStatus (bool s){
        this->status;
    }

    char getTitulo () { return titulo } ;
    char getAutor () { return autor } ;
    int getIsbn () { return isbn } ; 
    bool getStatus () { return status } ;

    void mostraLivro () {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "ISBN: " << isbn << endl;
        if (status == true) {
            cout << "Status: disponivel" << endl; 
        } else {
            cout << "Status emprestado" << endl;
        }  
    }
};

class Membro {
protected:
    char nome[100];
    int id;
    int max;
public:
    void mostraLimite(){
        cout << "Seu limite de livros eh: " << max << endl;
    }
}

class Estudante : public Membro {

}

class Visitante : public Membro {

}

class Professor : public Membro
