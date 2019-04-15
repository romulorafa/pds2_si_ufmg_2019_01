#ifndef LISTAENCADEADA_H_
#define LISTAENCADEADA_H_

struct node_t
{
	int elemento;
	node_t *proximo;
	node_t *anterior;
};

class ListaEncadeada
{
  private:
	node_t *_inicio_lista;
	node_t *_fim_lista;
	int _total_elementos;

  public:
	// *CONSTRUTOR
	ListaEncadeada();
	// *DESTRUTOR
	~ListaEncadeada();

	// *MÉTODOS
	void insere_elemento(int);	 // (a) insere_elemento(int). Insere um elemento no fim da lista.
	void insere_primeiro(int);	 // (b) insere_primeiro(int). Insere um elemento no inicio da lista.
	int get_iesimo(int);		   // (c) get_iesimo(int). Retorna um elemento na posição i
	int remover_elemento();		   // (d) remover_elemento(). Remove um elemento no fim da lista.
	int remover_primeiro();		   // (e) remover_primeiro(). Remove o primeiro elemento da lista.
	void inserir_iesimo(int, int); // (f) inserir_iesimo(int, int). Insere um elemento na posicão i.
	int remover_iesimo(int);	   // (g) remover_iesimo(int). Remove um elemento na posição
	int tamanho();				   // (h) tamanho(). Retorna o tamanho da lista.
};

#endif /*LISTAENCADEADA_H_*/