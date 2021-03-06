// 7.1.Arrays.cpp : Conteúdo da aula sobre arrays
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
//-------------------------------------------------------------
//  Inicializar um array com cinco elementos

	char vogais[]{ 'a' ,'e' ,'i' ,'o' ,'u' };
	cout << "A primeira vogal e " << vogais[0] << endl;
	cout << "A ultima vogal e " << vogais[4] << endl;

//-------------------------------------------------------------
	cout << endl;
//-------------------------------------------------------------
//  Inicializar um array com cinco elementos, sem declarar os seus elementos
	
	cout << "Quaisquer valores." << endl;
	
	int valores_quaisquer[5];
	cout << "Primeiro valor: " << valores_quaisquer[0] << endl;
	cout << "Segundo valor:  " << valores_quaisquer[1] << endl;
	cout << "Terceiro valor: " << valores_quaisquer[2] << endl;
	cout << "Quarto valor:   " << valores_quaisquer[3] << endl;
	cout << "Quinto valor:   " << valores_quaisquer[4] << endl;

//  Assim, o console irá apresentar o valor qualquer que estiver gravado na memória antes do array ter sido inicializado
//-------------------------------------------------------------
	cout << endl;
//-------------------------------------------------------------
//  Inicializar um array com cinco elementos, zerando os seus elementos

	cout << "Valores zerados." << endl;

	int temperaturas_da_semana[5] {};
	cout << "Segunda-feira: " << temperaturas_da_semana[0] << endl;
	cout << "Terca-feira:   " << temperaturas_da_semana[1] << endl;
	cout << "Quarta-feira:  " << temperaturas_da_semana[2] << endl;
	cout << "Quinta-feira:  " << temperaturas_da_semana[3] << endl;
	cout << "Sexta-feira:   " << temperaturas_da_semana[4] << endl;

//  Assim, o console irá apresentar o valor 0 de todos os seus elementos
//-------------------------------------------------------------
	cout << endl;
//-------------------------------------------------------------
//  Inicializar um array com cinco elementos, defindo os valores de seus elementos

	cout << "Notas das provas." << endl;

	double notas_das_provas[] {5.5, 3.0, 4.5, 6.5, 7.0};
	cout << "Geografia:   " << notas_das_provas[0] << endl;
	cout << "Portugues:   " << notas_das_provas[1] << endl;
	cout << "Matematica:  " << notas_das_provas[2] << endl;
	cout << "Quimica:     " << notas_das_provas[3] << endl;
	cout << "Historia:    " << notas_das_provas[4] << endl;

//  Assim, o console irá apresentar os valores definidos
//-------------------------------------------------------------
	cout << endl;
//-------------------------------------------------------------
//  Solicitar ao usuário para definir os elemntos de um array

	cout << "Corrija as suas cinco notas." << endl;

	cin >> notas_das_provas[0];
	cin >> notas_das_provas[1];
	cin >> notas_das_provas[2];
	cin >> notas_das_provas[3];
	cin >> notas_das_provas[4];

//-------------------------------------------------------------
	cout << endl;
//-------------------------------------------------------------

	cout << "As suas notas agora são." << endl;

	cout << "Geografia:   " << notas_das_provas[0] << endl;
	cout << "Portugues:   " << notas_das_provas[1] << endl;
	cout << "Matematica:  " << notas_das_provas[2] << endl;
	cout << "Quimica:     " << notas_das_provas[3] << endl;
	cout << "Historia:    " << notas_das_provas[4] << endl;

//  Assim, o console irá apresentar os valores definidos
//-------------------------------------------------------------
	cout << endl;
//-------------------------------------------------------------

	cout << "Array multidimensionais" << endl;

	int avaliacoes_de_filmes[3][4] //três avaliadores avaliam quatro filmes
	{
		{4, 5, 5, 6},
		{6, 5, 7, 8},
		{8, 7, 9, 6}
	};

	cout << avaliacoes_de_filmes[1][2] << endl;

	system("pause");
    return 0;
}

