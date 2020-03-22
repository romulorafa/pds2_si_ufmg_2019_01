#include "excecoes.h"

const char* MovimentoInvalidoException::what() const noexcept {
  return "Movimento nao eh valido!";
}

const char* PosicaoSemPecaException::what() const noexcept {
  return "Nao ha nenhuma peca na posicao indicada!";
}