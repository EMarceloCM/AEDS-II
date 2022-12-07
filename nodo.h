#pragma once
#include "cliente.h"

class nodo
{
    private:
        nodo *pai;
        nodo *esq;
        nodo *dir;
        cliente c;
        int nivel;
    public:
        //construtores
        nodo(/* args */);
        nodo(cliente &outro);
        nodo(const nodo &orig);
        virtual ~nodo();
        
        //getters e setters
        void setDir(nodo *dir);
        nodo* getDir() const;
        void setEsq(nodo *esq);
        nodo* getEsq() const;
        void setPai(nodo* pai);
        nodo* getPai() const;
        void setCliente(cliente c);
        cliente getCliente() const;
        void setNivel(int nivel);
        int getNivel() const;

        int getQuantFilhos();
        nodo* getFilhoUnico();
};