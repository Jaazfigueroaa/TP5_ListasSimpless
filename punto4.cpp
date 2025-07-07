#include <iostream>
using namespace std;
struct Nodo{
int dato;
Nodo* sig;
};
struct Pila{
Nodo* tope;
};
void iniciarPila(Pila &p){
p.tope=NULL;
}
void apilar(Pila &p,int valor){
Nodo* nuevo=new Nodo;
nuevo->dato=valor;
nuevo->sig=p.tope;
p.tope=nuevo;
}
void desapilar(Pila &p){
if(p.tope!=NULL){
Nodo* borrar=p.tope;
p.tope=p.tope->sig;
delete borrar;
}
}
int tope(Pila p){
if(p.tope!=NULL)return p.tope->dato;
return-1;
}
bool pilaVacia(Pila p){
return p.tope==NULL;
}
struct Cola{
Nodo* inicio;
Nodo* fin;
int cantidad;
};
void iniciarCola(Cola &c){
c.inicio=NULL;
c.fin=NULL;
c.cantidad=0;
}
void encolar(Cola &c,int valor){
Nodo* nuevo=new Nodo;
nuevo->dato=valor;
nuevo->sig=NULL;
if(c.inicio==NULL){
c.inicio=nuevo;
c.fin=nuevo;
}else{
c.fin->sig=nuevo;
c.fin=nuevo;
}
c.cantidad++;
}
void desencolar(Cola &c){
if(c.inicio!=NULL){
Nodo* borrar=c.inicio;
c.inicio=c.inicio->sig;
delete borrar;
c.cantidad--;
if(c.inicio==NULL)c.fin=NULL;
}
}
int frente(Cola c){
if(c.inicio!=NULL)return c.inicio->dato;
return-1;
}
