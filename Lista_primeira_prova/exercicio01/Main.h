#pragma once
#include"Contador.h"
class Main
{
public:

	const static int operacao01 = 1;
	const static int operacao02 = 2;
	const static int operacao03 = 3;
	const static int operacao04 = 4;
	
	static int menu();
	static void _operacao01(Contador* contador, const int& valor_a_ser_atribuido);
	static void _operacao02(Contador* contador);
	static void _operacao03(Contador* contador);
	static void _operacao04(Contador* contador);
	static void _operacao_geral(Contador* contador);


private:
	Main();
};

