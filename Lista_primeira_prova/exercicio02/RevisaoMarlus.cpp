// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
#include<Windows.h>
#endif // _WIN32

//2 – Defina uma classe em C++, que:
//
//Crie dois atributos, n1 e n2;
//
//Encapsule os atributos;
//
//Crie um método que troque os valores entre os atributos n1 e n2;
//
//Crie classe main que :
//
//Mostre um menu de opções para realizar as seguintes interações;
//
//Atribua valor aos atributos n1 e n2;
//
//Chame o método que altera os valores;
//
//Mostra os valores dos atributos;


#include"Main.h"
using namespace std;
int main()
{
	Simples_classe* sc = new Simples_classe();

	int resultado  = Main::menu();
	
	switch (resultado)
	{
	case Main::operacao01:
		int valor_a_ser_atribuido;
		cin >> valor_a_ser_atribuido;
		Main::_operacao01(sc, valor_a_ser_atribuido);
		break;

	case Main::operacao02:
		int valor_a_ser_atribuido1;
		cin >> valor_a_ser_atribuido1;
		int valor_a_ser_atribuido2;
		cin >> valor_a_ser_atribuido2;
		Main::_operacao02(sc,valor_a_ser_atribuido1,valor_a_ser_atribuido2);
		break;

	case Main::operacao03:
		Main::_operacao03(sc);
		break;
	default:
		break;
	}


	system("PAUSE");

    return 0;
}

