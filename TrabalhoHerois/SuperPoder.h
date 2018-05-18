#pragma once
#ifndef SUPERPODER_H
#define SUPERPODER_H
#include<string>
using namespace std;
class SuperPoder
{
private:
	string nome;
	int    categoria;

public:
	SuperPoder(const string& ,int);
	~SuperPoder();

	string get_nome		();
	int    get_categoria();

	void set_nome      (const string&);
	void set_categoria (const int&)   ;
};

#endif // !#define SUPERPODER_H
