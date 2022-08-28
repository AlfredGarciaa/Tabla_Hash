//Creamos nueva clase para direccionar nodos
#pragma once
#include<iostream>
using namespace std;
template<class tipo>

class Nodo
{
private:
	tipo valor;
	Nodo *sig;
	Nodo *ant;
	int cant;
	float precio;
public:
	Nodo() {
		sig = NULL;
		ant = NULL;
		cant = 0;
		precio = 0;
	}
    ~Nodo() {
        //
    }
    //Funciones para obtener precio y valor
    void setPrecio(int p) {
		precio = p;
	}
	int getPrecio() {
		return precio;
	}
	void setValor(tipo v) {
		valor = v;
	}
	void setSig(Nodo *s) {
		sig = s;
	}
	void setAnt(Nodo *a) {
		ant = a;
	}
	tipo getValor() {
		return valor;
	}
	Nodo *getSig() {
		return sig;
	}
	Nodo *getAnt() {
		return ant;
	}
};