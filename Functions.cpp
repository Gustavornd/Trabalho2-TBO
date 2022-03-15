#include "Functions.h"




/*
* Função usada para criar o arquivo de entrada de dados;
*/
void CreateInputFile() {
	fstream output;
	output.open("dados.txt", ios::out);

	if (!output)
		abort();

	output << "20" << endl;
	output << "70 1 12 8 99 72 5 15 20 91 14 61 66 41 81 88 16 21 34 90";

	output.close();
}


/*
* Função usada para criar um aquivo de entrada com dados
* aleatórios, mas não foi utilizado;
*/
void CreateRandomInputFile() {
	fstream output;
	output.open("dadosRadom.txt", ios::out);

	if (!output)
		abort();

	output << 100 << endl;

	for (unsigned i = 1; i <= 100; i++)
	{
		output << 1 + rand() % 1000 << " ";
	}

	output.close();
}




/*
* Função que realiza a ordenação da lista pelo método 
* Bubble Sort, ordenando a lista ordem crescente.
* 
* @param le					Lista encadeada estática que será ordenada
* @param imprime_lista		Indica se deve ser printada cada execução
*							da ordenação ou apenas a lista ordenada no
*							final da execução.
*/
int BubbleSort(ListaEstatica le, bool imprime_lista) {

	bool mudou = true;
	int n = le.tamanho;
	int aux = le.tamanho - 1;
	int acessos = 1;

	while (mudou) {
		mudou = false;
		for (int j = 0; j < n-1; j++) {
			if (le.dados[j] > le.dados[j + 1]) {
				mudou = true;
				aux = j;
				le.Swap(j, j + 1);
				acessos += 3;
			}
			acessos += 2;
		}
		n = aux + 1;
		if(imprime_lista)
			le.print();
	}

	if (!imprime_lista) {
		le.print();
	}
	return acessos;
}