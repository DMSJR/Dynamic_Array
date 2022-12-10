/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   ListaDE.cpp
 * Author: marqu
 * 
 * Created on 10 de novembro de 2022, 10:14
 */

#include "ListaDE.h"
#include <iostream>
#include <cstdlib>
#include <valarray>

using namespace std;

ListaDE::ListaDE() {
}

ListaDE::ListaDE(const ListaDE& orig) {
}

ListaDE::~ListaDE() {
}

void ListaDE::inserir_linha() {
    nodo2 *aux;
    nodo *outroaux;
    int valor;
    cout << "Digite o valor para inicializar a linha";
    cin >>valor;

    if (this->inicio == NULL) {

        aux = (struct nodo2*) malloc(sizeof (aux));
        this->inicio = aux;
        this->inicio->ant = NULL;
        aux->pos = 0;






    } else {

        aux = (struct nodo2*) malloc(sizeof (aux));
        aux->ant = this->fim;
        this->fim->prox = aux;
        aux->pos = ((aux->ant->pos) + 1);




    }

    this->fim = aux;
    this->fim->prox = NULL;
    outroaux = (struct nodo*) malloc(sizeof (outroaux));
    aux->lat = outroaux;
    outroaux->elem = valor;
    outroaux->prox = NULL;

}

void ListaDE::inserir() {
    int opc = 0, valor = 0;


    cout << "Em qual linha deseja inserir? ";
    cin >>opc;

    if (opc <= this->fim->pos) {


        int valor;
        nodo2 *aux2 = NULL;

        nodo *aux3 = NULL, *outroaux = NULL;




        cout << "Digite o valor para inserir: ";

        cin >>valor;



        aux2 = this->inicio;



        for (int i = 0; i < opc; i++) {
            if (aux2->pos == opc)
                break;
            aux2 = aux2->prox;


        }



        for (outroaux = aux2->lat; outroaux->prox != NULL; outroaux = outroaux->prox) {

        }
        aux3 = (struct nodo*) malloc(sizeof (aux3));
        aux3->elem = valor;
        outroaux->prox = aux3;
        aux3->ant = outroaux;
        aux3->prox = NULL;


    } else
        cout << "Posicao invalida";

}

void ListaDE::listar() {
    nodo *aux;
    nodo2 *aux2;

    int opc;
    cout << "Qual linha deseja listar?";
    cin >>opc;
    aux2 = this->inicio;
    for (int i = 0; i < opc; i++) {
        if (aux2->pos == opc)
            break;
        aux2 = aux2->prox;


    }

    for (aux = aux2->lat; aux != NULL; aux = aux->prox) {
        cout << aux->elem << endl;

    }
}

void ListaDE::menu() {

    int opc;
    while (opc != 4) {
        cout << "Escolha uma opcao:\n1 inserir linha \n2 - Inserir valor\n3 - listar\n4 - sair\n";
        cin >> opc;

        switch (opc) {
            case 1:
                this->inserir_linha();
                break;
            case 2:
                this->inserir();
                break;

            case 3:
                this->listar();
                break;
            case 4:
                break;

            default:
                cout << "Opcao invalida";

        }
    }
}



