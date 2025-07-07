#include <iostream>
using namespace std;
struct Nodo{
int dato;
Nodo* sig;
};
void insertarDesordenado(Nodo* &inicio, int valor){
Nodo* nuevo=new Nodo;
nuevo->dato=valor;
nuevo->sig=inicio;
inicio=nuevo;
}
Nodo* minimo(Nodo* &inicio){
if(inicio==NULL)return NULL;
Nodo *min=inicio, *ant=NULL,*act=inicio,*antMin=NULL;
while(act!=NULL){
if(act->dato<min->dato){
min=act;
antMin=ant;
}
ant=act;
act=act->sig;
}
if(antMin==NULL)inicio=min->sig;
else antMin->sig=min->sig;
min->sig=NULL;
return min;
}
void ordenarSeleccion(Nodo* &inicio){
Nodo* ordenada=NULL;
while(inicio!=NULL){
Nodo* min=minimo(inicio);
min->sig=ordenada;
ordenada=min;
}
while(ordenada!=NULL){
Nodo* aux=ordenada;
ordenada=ordenada->sig;
aux->sig=inicio;
inicio=aux;
}
}
void combinarSinOrden(Nodo* l1,Nodo* l2,Nodo* &res){
res=NULL;
while(l1!=NULL){
insertarDesordenado(res, l1->dato);
l1=l1->sig;
}
while(l2!=NULL){
insertarDesordenado(res,l2->dato);
l2=l2->sig;
}
}
void combinarOrdenado(Nodo* l1 Nodo* l2,Nodo* &res){
res=NULL;
Nodo* aux=NULL;
while(l1!=NULL&&l2!=NULL){
Nodo* nuevo=new Nodo;
if(l1->dato<l2->dato){
nuevo->dato=11->dato;
l1=l1->sig;
}else{
nuevo->dato=l2->dato;
l2=l2->sig;
}
nuevo->sig=NULL;
if(res==NULL){
res=nuevo;
aux=nuevo;
}else{
aux->sig=nuevo;
aux=nuevo;
}
}
while(l1 != NULL){
Nodo* nuevo=new Nodo;
nuevo->dato=l1->dato;
nuevo->sig=NULL;
aux->sig=nuevo;
aux=nuevo;
l1=l1->sig;
}
while(l2!=NULL){
Nodo* nuevo=new Nodo;
nuevo->dato=l2->dato;
nuevo->sig=NULL;
aux->sig=nuevo;
aux=nuevo;
l2=l2->sig;
}
}
