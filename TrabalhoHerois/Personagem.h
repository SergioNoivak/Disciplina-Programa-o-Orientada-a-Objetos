#pragma once
#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include<string>
#include<vector>
#include"SuperPoder.h"
using namespace std;


class Personagem
{
private:
	string nome;
	string nomeVidaReal;
	vector<SuperPoder*> poderes;
	int quantidade_superpoderes;

public:
	
	virtual string get_nome        ();
	virtual string get_nomeVidaReal();
	virtual void set_nome(		  const string&);
	virtual void set_nomeVidaReal(const string&);
	virtual void adicionaSuperpoder(SuperPoder*);
	virtual int get_poder_total();

	Personagem(const string&, const string&);
};

#endif // PERSONAGEM_H




