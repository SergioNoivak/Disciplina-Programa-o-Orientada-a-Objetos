// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
#include<Windows.h>
#endif // _WIN32
#include"Aluno.h"

//  4 - Crie uma classe Aluno contendo os seguintes atributos : nome, n1 e n2.
//		Respeite a regra do encapsulamento.Essa classe contem também o método média que
//		calcula a média aritmética das notas desse aluno.Escreva um programa de teste(Principal) 
//		onde deverão ser instanciados dois objetos da classe, 
//		como saída deve - se informar o nome do aluno e sua respectiva média.



using namespace std;

//Escreva um programa de teste(Principal) onde deverão ser instanciados dois objetos da classe
int main()
{


	Aluno* a = new Aluno();
	a->set_n1(90.1);
	a->set_n2(70.01);
	a->set_nome("Professor Marlus");
/*	como saída deve - se informar o nome do aluno e sua respectiva média.*/
	cout << a->get_nome() << endl;
	cout << a->media();

#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

