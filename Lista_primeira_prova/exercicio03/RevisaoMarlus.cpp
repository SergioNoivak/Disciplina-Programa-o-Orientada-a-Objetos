// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
#include<Windows.h>
#endif // _WIN32
#include"Main.h"

//1qw = 1/700*(S)


using namespace std;
int main()
{
	Simples_classe* sc = new Simples_classe();
	int resultado = -1;
	
	while (resultado != Main::operacao04) {
		
		resultado = Main::menu();
		switch (resultado)
		{
		case Main::operacao01:
			cout << "Entre com os valores" << endl;
			double valor1, valor2;
			cin >> valor1 >> valor2;
			Main::_operacao01(sc, valor1, valor2);
			break;


			//  E que mostre na tela a quantidade em reais que a residência vai pagar,
			//	com e sem o desconto.

		case Main::operacao02:
			Main::_operacao02(sc);
			break;
			
			
		}

	}
#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

