// RevisaoMarlus.cpp : define o ponto de entrada para o aplicativo do console.
//
#include "stdafx.h"
#include<iostream>
#ifdef _WIN32
	#include<Windows.h>
#endif // _WIN32
#include"Main.h"

/*
11 – Desenvolva uma classe chamada Time, com tenha como atributos, 
	 nome, data de fundação, estádio. Desenvolva uma classe Main 
	 para manipular um array de times,
	 onde o usuário poderá adicionar vinte times.
*/



using namespace std;
int main()
{
	Main m ;
	m.adicionar_vinte_times();

#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

    return 0;
}

