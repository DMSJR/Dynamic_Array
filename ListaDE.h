/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   ListaDE.h
 * Author: marqu
 *
 * Created on 10 de novembro de 2022, 10:14
 */

#ifndef LISTADE_H
#define LISTADE_H
#include <cstdlib>

class ListaDE {

    struct nodo {
        nodo *ant;
        nodo *prox;
        int elem;
    };

    struct nodo2 {
        nodo2 *ant;
        nodo2 *prox;
        int pos;
        nodo *lat = NULL;
    };
public:
    ListaDE();
    ListaDE(const ListaDE& orig);
    virtual ~ListaDE();
    void inserir();
    void listar();
    void remover();
    void menu();
    void inserir_meio();
    void remover_meio();
    void inserir_pos();
    void inserir_linha();
    nodo2 *inicio = NULL;
    nodo2 *fim = NULL;
   
    
private:



};

#endif /* LISTADE_H */

