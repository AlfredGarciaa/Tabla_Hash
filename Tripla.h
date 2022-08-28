#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Tripla
{
private:
	int cont;
	T elem;
	Tripla<T>* SIG;
	Tripla<T>* ANT;

public:
	Tripla()
	{
		cont = 0;
		SIG = NULL;
		ANT = NULL;
	}

	T getElemento()
	{
		return elem;
	}

	void setElemento(T nameElem)
	{
		this->elem = nameElem;
	}

	Tripla* getSiguiente()
	{
		return SIG;
	}

	void setSiguiente(Tripla<T>* siguiente)
	{
		this->SIG = siguiente;
	}

	Tripla* getAnterior()
	{
		return ANT;
	}

	void setAnterior(Tripla<T>* anterior)
	{
		this->ANT = anterior;
	}

	void mostrar()
	{
		//Censuramos
		//cout << elem << " - " << cont << endl;
		cout << elem << endl;
	}

	void setCont(int c)
	{
		this->cont = c;
	}

	int getCont()
	{
		return cont;
	}
};