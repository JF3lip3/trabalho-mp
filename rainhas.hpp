/**

@file rainhas.hpp
@brief Arquivo de cabeçalho para o problema das N-Rainhas.
Este arquivo contém a declaração da função verifica_soluc que é utilizada
para verificar a solução do problema das N-Rainhas em um tabuleiro.
*/
#ifndef RAINHAS_HPP_
#define RAINHAS_HPP_

#include <vector>

/**

@brief Verifica se uma solução é válida para o problema das N-Rainhas.
Esta função recebe um tabuleiro representado por um vetor de inteiros.
Cada elemento do vetor representa a coluna onde uma rainha está posicionada
em cada linha. A função verifica se as rainhas não estão atacando umas às outras,
isto é, se não existem duas rainhas na mesma coluna, na mesma linha ou na mesma diagonal.
@param tabuleiro O tabuleiro representado por um vetor de inteiros.
@return Um inteiro indicando se a solução é válida (0) ou inválida (1).
*/
int verifica_soluc(const std::vector<int>& tabuleiro);
#endif // RAINHAS_HPP_