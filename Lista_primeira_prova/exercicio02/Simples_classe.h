#pragma once
#ifndef SIMPLES_CLASSE_H
#define SIMPLES_CLASSE_H
class Simples_classe
{
private:
	int n1, n2;
public:
	void set_n1(const int & n1);
	void set_n2(const int & n2);
	int get_n1();
	int get_n2();
	void swap();


	Simples_classe();
	~Simples_classe();

};
#endif // !SIMPLES_CLASSE_H


