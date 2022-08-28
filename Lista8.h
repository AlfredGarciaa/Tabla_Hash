#pragma once
#include "Tripla.h"
template <class T>

class Lista8
{
private:
	Tripla<T>* Primer;
	Tripla<T>* Ultimo;
	int tamanio;

public:
	Lista8()
	{
		Primer = NULL;
		Ultimo = NULL;
		tamanio = 0;
	}

	void InsertarPrincipio(T elem)
	{
		if (Primer == NULL)
		{
			Primer = new Tripla<T>;
			Primer->setElemento(elem);
			Ultimo = Primer;
		}
		else
		{
			Tripla<T>* nueva_Tripla = new Tripla<T>;
			nueva_Tripla->setElemento(elem);
			nueva_Tripla->setSiguiente(Primer);
			Primer->setAnterior(nueva_Tripla);
			Primer = nueva_Tripla;
		}
	}

	//Habilitamos
	void InsertarFinal(T elem)
	{
		if (Primer == NULL)
		{
			InsertarPrincipio(elem);
		}
		else
		{
			Tripla<T>* nueva_Tripla = new Tripla<T>;
			nueva_Tripla->setElemento(elem);
			nueva_Tripla->setAnterior(Ultimo);
			Ultimo->setSiguiente(nueva_Tripla);
			Ultimo = nueva_Tripla;
		}
	}

	void EliminarFinal()
	{
		if (Primer != NULL)
		{
			if (Ultimo->getAnterior() != NULL)
			{
				Tripla<T>* aux = new Tripla<T>;
				aux = Ultimo->getAnterior();
				delete Ultimo;
				Ultimo = aux;
				aux->setSiguiente(NULL);
			}
			else
			{
				EliminarPrincipio();
			}
		}
	}

	//Habilitamos
	void EliminarPrincipio()
	{
		if (Primer != NULL)
		{
			if (Primer->getSiguiente() != NULL)
			{
				Tripla<T>* aux = new Tripla<T>;
				aux = Primer->getSiguiente();
				delete Primer;
				Primer = aux;
				aux->setAnterior(NULL);
			}
			else
			{
				delete Primer;
				Primer = NULL;
				Ultimo = NULL;
			}
		}
	}

	bool BuscarNoRecursivo(T elem)
	{
		bool exist = false;
		if (Primer != NULL)
		{
			for (Tripla<T>* i = Primer; i != NULL; i = i->getSiguiente())
			{
				if (i->getElemento() == elem)
				{
					exist = true;
				}
			}
		}
		return exist;
	}

	void mostrarLista()
	{
		if (Primer != NULL)
		{
			for (Tripla<T>* i = Primer; i != NULL; i = i->getSiguiente())
			{
				i->mostrar();
			}
		}
	}

	T encontrar_iesima(int pos)
	{
		T res = -1;
		if (Primer != NULL)
		{
			Tripla<T>* aux = Primer;
			for (int i = 0; i != pos; i++)
			{
				aux = aux->getSiguiente();
			}
			res = aux->getElemento();
		}
		return res;
	}

	void insertarElementoEnSuLugar(T elem)
	{

		if (Primer != NULL)
		{
			Tripla* nueva_Tripla = new Tripla<T>;
			Primer = nueva_Tripla;
			Ultimo = nueva_Tripla;
		}
	}

	void eliminarLista()
	{
		while (Primer != NULL)
		{
			EliminarPrincipio();
		}
	}

	void insertarElementos()
	{
		T elem;
		for (int i = 0; i < 10000; i++)
		{
			elem = i;
			InsertarPrincipio(elem);
		}
	}

	//Censurado
	/*void InsertarContando(T elem)
	{
		int aux = 0;
		if (Primer == NULL)
		{
			InsertarPrincipio(elem);
			aux = 1;
			tamanio++;
		}
		else
		{
			for (Tripla<T>* i = Primer; i != NULL; i = i->getSiguiente())
			{
				if (i->getElemento() == elem)
				{
					i->setCont(i->getCont() + 1);
					aux = 1;
				}
			}
		}
		if (aux == 0)
		{
			InsertarFinal(elem);
			aux = 1;
			tamanio++;
		}
	}*/

	int getTam()
	{
		return tamanio;
	}

	Tripla<T>* getPrimero()
	{
		return Primer;
	}

	Tripla<T>* getUltimo()
	{
		return Ultimo;
	}
};