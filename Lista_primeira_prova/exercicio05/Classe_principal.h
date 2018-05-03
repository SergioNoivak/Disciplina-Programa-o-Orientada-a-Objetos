
//Escreva uma classe teste(Principal) onde o usu�rio dever� 
//informar quantas pessoas ser�o cadastradas em um vetor
#pragma once
#ifndef CLASSE_PRINCIPAL_H
#define CLASSE_PRINCIPAL_H
#include"Pessoa.h"
#include<vector>
class Classe_principal
{
	int tamanho_vetor;
	vector<Pessoa> vetor;

public:
	void informar_quantas_pessoas_ser�o_cadastradas_em_um_vetor(int quantas);
	void cadastrar();
	void exibir();
	
	Classe_principal();
	~Classe_principal();
};

#endif // !CLASSE_PRINCIPAL_H



