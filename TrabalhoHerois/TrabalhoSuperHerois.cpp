// TrabalhoSuperHerois.cpp : define o ponto de entrada para o aplicativo do console.
//
#include"Personagem.h"
#include"SuperPoder.h"
#ifdef _WIN32
	#include<Windows.h>
#endif // _WIN32
#include"Jogo.h"
#include<iostream>

using namespace std;
int main()
{

	Jogo::main();


#ifdef _WIN32
	system("PAUSE");
#endif

    return 0;
}

