#include <iostream>
#include "listaencadeada.h"

// *CONSTRUTOR
ListaEncadeada::ListaEncadeada()
{
	this->_inicio_lista = nullptr;
	this->_fim_lista = nullptr;
	this->_total_elementos = 0;
}

// *DESTRUTOR
ListaEncadeada::~ListaEncadeada()
{
	// **VARIÁVEIS LOCAIS
	node_t *no_atual = this->_inicio_lista;
	node_t *no_aux = nullptr;

	// **OPERAÇÕES
	while (no_atual != nullptr)
	{
		no_aux = no_atual;
		no_atual = no_atual->proximo;
		delete no_aux;
		this->_total_elementos--;
	}
}
// *MÉTODOS
// **(a) insere_elemento(int). Insere um elemento no fim da lista.
void ListaEncadeada::insere_elemento(int num)
{
	// ***VARIÁVEIS LOCAIS
	node_t *no = new node_t();

	// ***OPERAÇÕES
	no->anterior = this->_fim_lista;
	no->proximo = nullptr;
	no->elemento = num;

	if (this->_inicio_lista == nullptr)
	{
		this->_inicio_lista = no;
		this->_fim_lista = no;
	}
	else
	{
		this->_fim_lista->proximo = no;
		this->_fim_lista = no;
	}
	this->_total_elementos++;
}

// **(b) insere_primeiro(int). Insere um elemento no inicio da lista.
void ListaEncadeada::insere_primeiro(int num)
{
	// ***VARIÁVEIS LOCAIS
	node_t *no = new node_t();

	// ***OPERAÇÕES
	no->anterior = nullptr;
	no->proximo = this->_inicio_lista;
	no->elemento = num;

	if (this->_inicio_lista == nullptr)
	{
		this->_fim_lista = no;
	}
	if (this->_inicio_lista != nullptr)
	{
		this->_inicio_lista->anterior = no;
	}

	this->_inicio_lista = no;
	this->_total_elementos++;
}

// **(c) get_iesimo(int). Retorna um elemento na posição i
int ListaEncadeada::get_iesimo(int posicao)
{
	// ***VARIÁVEIS LOCAIS
	node_t *no = this->_inicio_lista;
	int cont = 0;

	// ***OPERAÇÕES
	while (no != nullptr)
	{
		if (posicao == cont)
		{
			return no->elemento;
		}
		no = no->proximo;
		cont++;
	}
	return 0;
}

// **(d) remover_elemento(). Remove um elemento no fim da lista.
int ListaEncadeada::remover_elemento()
{
	// ***VARIÁVEIS LOCAIS
	node_t *no_aux;
	int num;

	// ***OPERAÇÕES
	if (this->_fim_lista == nullptr)
	{
		exit(1);
	}
	num = this->_fim_lista->elemento;
	if (this->_inicio_lista == this->_fim_lista)
	{
		delete this->_inicio_lista;
		this->_inicio_lista = nullptr;
		this->_fim_lista = nullptr;
	}
	else
	{
		no_aux = this->_fim_lista;
		no_aux->anterior->proximo = nullptr;
		this->_fim_lista = no_aux->anterior;
		delete no_aux;
	}
	this->_total_elementos--;
	return num;
}

// **(e) remover_primeiro(). Remove o primeiro elemento da lista.
int ListaEncadeada::remover_primeiro()
{
	// ***VARIÁVEIS LOCAIS
	node_t *no_aux;
	int num;

	// ***OPERAÇÕES
	if (this->_inicio_lista == nullptr)
	{
		exit(1);
	}
	num = this->_inicio_lista->elemento;
	if (this->_inicio_lista == this->_fim_lista)
	{
		delete this->_inicio_lista;
		this->_inicio_lista = nullptr;
		this->_fim_lista = nullptr;
	}
	else
	{
		this->_inicio_lista->proximo->anterior = nullptr;
		no_aux = this->_inicio_lista;
		this->_inicio_lista = this->_inicio_lista->proximo;
		delete no_aux;
	}
	this->_total_elementos--;
	return num;
}

// **(f) inserir_iesimo(int, int). Insere um elemento na posicão i.
void ListaEncadeada::inserir_iesimo(int num, int posicao)
{
	// ***VARIAVEIS LOCAIS
	node_t *no;
	node_t *no_aux = this->_inicio_lista;

	// ***OPERAÇÕES
	for (int i = 0; i < posicao; i++)
	{
		if (no_aux->proximo == nullptr)
		{
			this->insere_elemento(num);
			return;
		}
		no_aux = no_aux->proximo;
	}

	if (no_aux == this->_inicio_lista)
	{
		this->insere_primeiro(num);
	}
	else if (no_aux == this->_fim_lista)
	{
		this->insere_elemento(num);
	}
	else
	{
		no = new node_t();
		no->anterior = no_aux->anterior;
		no->proximo = no_aux;
		no->elemento = num;
		no_aux->anterior->proximo = no;
		this->_total_elementos++;
	}
}

// **(g) remover_iesimo(int). Remove um elemento na posição
int ListaEncadeada::remover_iesimo(int posicao)
{
	// ***VARIÁVEIS LOCAIS
	int num;
	node_t *no_aux;
	node_t *no_busca = this->_inicio_lista;

	// ***OPERAÇÕES
	for (int i = 0; i < posicao; i++)
	{
		if (no_busca == nullptr)
		{
			exit(1);
		}
		no_busca = no_busca->proximo;
	}
	if (no_busca == this->_inicio_lista)
	{
		return this->remover_primeiro();
	}
	else if (no_busca == this->_fim_lista)
	{
		return this->remover_elemento();
	}
	else
	{
		no_aux = no_busca;
		no_busca->anterior->proximo = no_busca->proximo;
		no_busca->proximo->anterior = no_busca->anterior;
		num = no_busca->elemento;
		delete no_aux;
		this->_total_elementos--;
		return num;
	}
}

// **(h) tamanho(). Retorna o tamanho da lista.
int ListaEncadeada::tamanho()
{
	// ***VARIÁVEIS LOCAIS

	// ***OPERAÇÕES
	return this->_total_elementos;
}

// **(i) remover elementos consecutivos com um mesmo valor
void ListaEncadeada::remove_consecutivos()
{
	// ***VARIÁVEIS LOCAIS
	int posicao;
	node_t *no_aux;
	node_t *no_comparador;

	// ***OPERAÇÕES
	posicao = 0;
	no_aux = this->_inicio_lista;
	no_comparador = no_aux->proximo;
	while (no_comparador != nullptr)
	{
		if (no_aux->elemento == no_comparador->elemento)
		{
			posicao++;
			no_comparador = no_comparador->proximo;
			remover_iesimo(posicao);
			posicao--;
		}
		else
		{
			posicao++;
			no_comparador = no_comparador->proximo;
			no_aux = no_aux->proximo;
		}
	}
}