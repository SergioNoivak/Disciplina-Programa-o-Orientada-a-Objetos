#pragma once
#include"Simples_classe.h"
class Main
{
public:

	const static int operacao01 = 1;
	const static int operacao02 = 2;
	const static int operacao03 = 3;

	static int menu();

	//Atribua valor aos atributos n1 e n2;
	static void _operacao01(Simples_classe* sc, int valor);
	// Chame o método que altera os valores;
	static void _operacao02(Simples_classe* sc, int valor1, int valor2);
	//Mostra os valores dos atributos;
	static void _operacao03(Simples_classe* sc);

private:
	Main();
};

