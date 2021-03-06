// 7.2.Vetores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
//	vector <char> vogais;		//vazio
//	vector <char> vogais(5);	//cinco elementos inicializados com o valor 0;
	vector <char> vogais{ 'a' ,'e' ,'i' ,'o' ,'u' };

	cout << vogais[0] << endl;
	cout << vogais[4] << endl;

	cout << endl;

	vector <int> notas_dos_testes{ 100, 99, 98 };

	cout << "Notas dos teste usando sintaxe de arrays" << endl;
	cout << notas_dos_testes[0] << endl;
	cout << notas_dos_testes[1] << endl;
	cout << notas_dos_testes[2] << endl;

	cout << endl;

	cout << "Notas dos teste usando sintaxe de vetores" << endl;
	cout << notas_dos_testes.at(0) << endl;
	cout << notas_dos_testes.at(1) << endl;
	cout << notas_dos_testes.at(2) << endl;
	cout << "Existem " << notas_dos_testes.size() << " notas no vetor notas_dos_testes" << endl;

	cout << endl;

	cout << "Entre três notas de testes: " << endl;
	cin >> notas_dos_testes.at(0);
	cin >> notas_dos_testes.at(1);
	cin >> notas_dos_testes.at(2);

	cout << endl;

	cout << "Notas de testes atualizadas: " << endl;
	cout << notas_dos_testes.at(0) << endl;
	cout << notas_dos_testes.at(1) << endl;
	cout << notas_dos_testes.at(2) << endl;

	cout << endl;

	int nota_adicional{ 0 };
	cout << "Entre mais uma nota: " << endl;
	cin >> nota_adicional;

	notas_dos_testes.push_back(nota_adicional);

	cout << endl;

	cout << "Entre uma outra nota: " << endl;
	cin >> nota_adicional;

	notas_dos_testes.push_back(nota_adicional);

	cout << endl;

	cout << "Notas de testes atualizadas: " << endl;
	cout << notas_dos_testes.at(0) << endl;
	cout << notas_dos_testes.at(1) << endl;
	cout << notas_dos_testes.at(2) << endl;
	cout << notas_dos_testes.at(3) << endl;
	cout << notas_dos_testes.at(4) << endl;

	cout << endl;

	cout << "Existem " << notas_dos_testes.size() << " notas no vetor notas_dos_testes" << endl;

	cout << endl;

//	Exemplo de um vetor 2-D

	vector <vector <int>> avaliacoes_de_filmes
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,1,2,3}
	};

	cout << "Avaliacao do primeiro critico" << endl;
	cout << avaliacoes_de_filmes[0][0] << endl;
	cout << avaliacoes_de_filmes[0][1] << endl;
	cout << avaliacoes_de_filmes[0][2] << endl;
	cout << avaliacoes_de_filmes[0][3] << endl;

	cout << "Avaliacao do segundo critico" << endl;
	cout << avaliacoes_de_filmes[1][0] << endl;
	cout << avaliacoes_de_filmes[1][1] << endl;
	cout << avaliacoes_de_filmes[1][2] << endl;
	cout << avaliacoes_de_filmes[1][3] << endl;

	cout << "Avaliacao do terceiro critico" << endl;
	cout << avaliacoes_de_filmes[2][0] << endl;
	cout << avaliacoes_de_filmes[2][1] << endl;
	cout << avaliacoes_de_filmes[2][2] << endl;
	cout << avaliacoes_de_filmes[2][3] << endl;

	system("pause");
    return 0;
}

