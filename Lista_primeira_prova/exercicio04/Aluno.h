#pragma once
#include<string>
#ifndef ALUNO_H
#define ALUNO_H
using namespace std;
class Aluno
{
private:
	double n1;
	double n2;
	string nome;

public:
	double get_n1();
	double get_n2();
	string get_nome();
	void set_n1( const double& novo_valor);
	void set_n2(const double& novo_valor);
	void set_nome(const string& nome);
	double media();
		


	Aluno();
	~Aluno();
};
#endif // !ALUNO_H



