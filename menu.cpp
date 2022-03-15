#include "menu.h"

/*
* Função que implementa o menu de testes.
*/
void Menu() {
	while (true) {
		unsigned opcao;
		system("cls");
		cout << "1. Ler lista" << endl;
		cout << "2. Lista aleatória" << endl;
		cout << "0. Sair." << endl;

		cout << "Escolha uma opção: ";
		cin >> opcao;

		if (opcao == 0)
			break;
		//Testes com a lista informada no trabalho
		if (opcao == 1)
		{
			system("cls");
			cout << endl << "------------------LISTA ESTATICA--------------------" << endl;
			ListaEstatica le("dados.txt");
			int acessos;


			le.print();
			cout << endl << "----------------XXXXXXXXXXXXXXXXXXX------------------" << endl;

			acessos = BubbleSort(le, true);
			cout << "Acessos: " << acessos << endl;
			system("pause");
		}

		//Testes com as listas aleatórias
		if (opcao == 2) {
			system("cls");
			cout << endl << "------------------LISTA ESTATICA ALEATÓRIA--------------------" << endl;
			ListaEstatica a(100);
			fstream output;
			output.open("acessos.csv", ios::out);

			for (unsigned i = 1; i <= 100; i++) {
				system("cls");
				ListaEstatica le(i);

				le.print();
				cout << endl << "----------------XXXXXXXXXXXXXXXXXXX------------------" << endl;


				int acessos = BubbleSort(le, false);
				cout << "Tamanho da Lista: " << i << endl;
				cout << "Acessos: " << acessos << endl;
				output << i << ";" << acessos << endl;

				system("pause");
			}
			output.close();
		}
	}
}
