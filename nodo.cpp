#include "nodo.h"

nodo::nodo() {
    this->pai = NULL;
    this->esq = NULL;
    this->dir = NULL;
    //this->c = NULL;
    this->nivel = 0;
}

nodo::nodo(cliente& outro){
    this->pai = NULL;
    this->esq = NULL;
    this->c.copiar(outro);
    this->dir = NULL;
    this->nivel = 1;
}

nodo::nodo(const nodo& orig) {
    this->pai = orig.getPai();
    this->c = orig.getCliente();
    this->esq = orig.getEsq();
    this->dir = orig.getDir();
    this->nivel = orig.getNivel();
            
}

nodo::~nodo() {}

int nodo::getQuantFilhos(){
    if(dir == NULL && esq == NULL)
        return 0;
    else if((dir == NULL && esq != NULL) ||(dir != NULL && esq == NULL))
        return 1;
    else
        return 2;
}

nodo* nodo::getFilhoUnico(){ //retorna null caso tenha mais de um filho
    if(this->getQuantFilhos() == 1){
        if(this->esq != NULL)
            return this->esq;
        else
            return this->dir;
    }else{
        return NULL;
    }
}

void nodo::setNivel(int nivel){
    this->nivel = nivel;
}

int nodo::getNivel() const{
    return nivel;
}

void nodo::setDir(nodo* dir){
    if(this != NULL)
        this->dir = dir;
}

nodo* nodo::getDir() const{
    return dir;
}

void nodo::setCliente(cliente c){
    this->c = c;
}

cliente nodo::getCliente() const{
    return c;
}

void nodo::setEsq(nodo* esq){
    this->esq = esq;
}

nodo* nodo::getEsq() const{
    return esq;
}

void nodo::setPai(nodo* pai){
    this->pai = pai;
}

nodo* nodo::getPai() const{
    return pai;
}
