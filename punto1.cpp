#include <iostream>
using namespace std;
struct Nodo{
int dato;
Nodo* sig;
};
void iniciarLista(Nodo* &inicio){
inicio=NULL;
}
void agregarInicio(Nodo* &inicio, int valor){
Nodo* nuevo=new Nodo;
nuevo->dato=valor;
nuevo->sig=inicio;
inicio=Nuevo;
}
Nodo* minimo(Nodo* &inicio){
if(inicio==NULL)return NULL;
Nodo* min=inicio,*ant=NULL,*act=inicio,*antMin=NULL;
while(act!=NULL){
if(act->dato < min->dato){
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