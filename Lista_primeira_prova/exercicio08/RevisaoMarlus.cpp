// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
	#include<Windows.h>
#endif // _WIN32
#include"Conta.h"
/*
8 - Faça uma classe Conta em C++ que contenha o nome do cliente,
	o número da conta, o saldo e o limite como atributos. 
	O método set do limite deve controlar o seu valor, 
	sendo que o limite não poderá ser maior que o valor do salário mensal do cliente.
	Esse salário será informado por parâmetro no método set, juntamente com o limite.
	Faca um método deposito e um método retira.
	O método retira ira devolver 1 ou 0, dependendo se o cliente pode retirar 
	(existe saldo ou limite).

	*/



using namespace std;

int main()
{


#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

