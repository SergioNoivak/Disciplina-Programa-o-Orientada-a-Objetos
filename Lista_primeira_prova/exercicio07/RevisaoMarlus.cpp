// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
	#include<Windows.h>
#endif // _WIN32
#include"Conta_corrente.h"
/*
7 - Implementar uma classe Conta Corrente que possua 
	os seguintes atributos : nome_cliente, numero, senha e saldo.
	Possui ainda os métodos cadastrar_senha que recebe uma senha como parâmetro 
	e altera o atributo senha e o método alterar_senha que recebe como parâmetro a
	senha antiga e a nova senha.Ele alterará o atributo senha apenas se a senha antiga
	for a correta.Os métodos debitar e creditar também deverão ser implementados, 
	eles receberão como parâmetro o valor a ser debitado ou creditado, 
	o numero da conta e a senha.Eles só deverão efetuar a operação caso a senha
	e conta forem corretas.Observar o encapsulamento e escreva uma class main 
	para realizar as alterações.*/



using namespace std;

int main()
{


#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

