#pragma once
#include "cliente.h"

class No
{
    private:
        No *pai;
        No *esq;
        No *dir;
        cliente c;
        int nivel;
    public:
        //construtores
        No(/* args */);
        No(cliente &outro);
        No(const No &orig);
        virtual ~No();
        
        //getters e setters
        void setDir(No *dir);
        No* getDir() const;
        void setEsq(No *esq);
        No* getEsq() const;
        void setPai(No* pai);
        No* getPai() const;
        void setCliente(cliente c);
        cliente getCliente() const;
        void setNivel(int nivel);
        int getNivel() const;

        int getQuantFilhos();
        No* getFilhoUnico();
};