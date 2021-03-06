// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
#include<Windows.h>
#endif // _WIN32




//1 – Defina uma classe em C++, chamada de Contador, que:
//
//Declare um atributo chamado número;
//
//Encapsule esse atributo;
//
//Crie um método que incremente o atributo número, soma 1 ao valor atual do número;
//
//Crie um método que desfaça o incremento feito no método que incrementa;
//
//Crie uma classe main que :
//
//Mostre um menu de opções para realizar as seguintes interações;
//
//Que atribua um valor ao atributo número, através do set_numero;
//
//Chame o método que incrementa o número;
//
//Mostra o número;
//
//Chame o método que desfaz o incremento;
//
//Mostra o número novamente;
//

#include"Main.h"
#include"Contador.h"

using namespace std;
int main()
{
	Contador* c = new Contador();
	int resultado  = Main::menu();
	
	switch (resultado)
	{
	case Main::operacao01:
		int valor_a_ser_atribuido;
		cin >> valor_a_ser_atribuido;
		Main::_operacao01(c, valor_a_ser_atribuido);
		break;

	case Main::operacao02:
		Main::_operacao02(c);
		break;

	case Main::operacao03:
		Main::_operacao03(c);
		break;

	case Main::operacao04:
		Main::_operacao04(c);
		break;

	default:
		break;
	}




	system("PAUSE");

    return 0;
}

