// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
	#include<Windows.h>
#endif // _WIN32
#include"Calculo.h"
#include"Geral.h";
/*
	6 - Implemente uma classe CALCULO que deverá ter apenas um atributo 
		inteiro chamado SALDO que não poderá ser acessado externamente e 
		deverá ser inicializado com o valor 0. Essa classe conterá ainda
		três métodos públicos CREDITO, DEBITO e GETSALDO.O método CREDITO
		quando chamado irá somar o valor recebido como parâmetro ao atributo SALDO,
		o método DEBITO irá subtrair o valor recebido como parâmetro do atributo SALDO.
		Já o método GET SALDO irá apenas retornar o conteúdo do atributo SALDO para a classe chamadora.
		A classe GERAL deverá conter duas instancias objeto do tipo CALCULO.
		O usuário informará o valor que deverá ser creditado inicialmente em cada um dos objetos e
		depois informará o valor que deverá ser debitado em cada uma dos dois objetos.
		Depois o programa mostrará o saldo final de cada uma das contas.
*/



using namespace std;

int main()
{
	Geral g;
	g.creditar(11.1, 22.22222);
	g.mostrar_saldo_final();
	


#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

