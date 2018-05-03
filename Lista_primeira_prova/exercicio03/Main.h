#pragma once
#include"Simples_classe.h"
class Main
{
public:

	const static int operacao01 = 1;
	const static int operacao02 = 2;
	const static int operacao03 = 3;
	const static int operacao04 = 4;

	static int menu();

	//Atribua um valor aos atributos da classe;
	static void _operacao01(Simples_classe* sc, double valor1, double valor2);
	//E que mostre na tela a quantidade em reais que a residência vai pagar, 
	//com e sem o desconto.
	static void _operacao02(Simples_classe* sc);
	//Mostra os valores dos atributos;
	static void _operacao03(Simples_classe* sc);

private:
	Main();
};

