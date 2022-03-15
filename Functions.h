#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "ListaEstatica.h"


using namespace std;

/*
* Função usada para criar o arquivo de entrada de dados;
*/
void CreateInputFile();

/*
* Função usada para criar um aquivo de entrada com dados
* aleatórios, mas não foi utilizado;
*/
void CreateRandomInputFile();


/*
* Função que realiza a ordenação da lista pelo método
* Bubble Sort, ordenando a lista ordem crescente.
*
* @param le					Lista encadeada estática que será ordenada
* @param imprime_lista		Indica se deve ser printada cada execução
*							da ordenação ou apenas a lista ordenada no
*							final da execução.
*/
int BubbleSort(ListaEstatica Le, bool imprime_lista);

#endif // !FUNCTIONS_H

