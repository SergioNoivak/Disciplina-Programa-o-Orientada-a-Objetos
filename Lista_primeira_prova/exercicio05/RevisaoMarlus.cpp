// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
	#include<Windows.h>
#endif // _WIN32
#include"Pessoa.h"
#include"Classe_principal.h";
//	5 - Crie uma classe Pessoa contendo os seguintes atributos :
//		nome, número de contribuinte e idade.Respeite a regra do 
//		encapsulamento.
//		Escreva uma classe teste(Principal) 
//onde o usuário deverá informar quantas pessoas serão 
//		cadastradas em um vetor.Após preencher todas as informações deve imprimir o dados de todos.


using namespace std;

int main()
{

	//		Escreva uma classe teste(Principal) 
	//onde o usuário deverá informar quantas pessoas serão .....
	Classe_principal* cp = new Classe_principal();
	cp->cadastrar();
	cp->exibir();



#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

