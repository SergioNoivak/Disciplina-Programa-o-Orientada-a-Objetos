#pragma once

#ifndef VILAO_H
#define VILAO_H
#include "Personagem.h"
class Vilao :public Personagem
{
	int tempo_de_prisao;
public:

	int  get_tempo_de_prisao();
	void set_tempo_de_prisao(const int&);
	Vilao(const string& , const string& , const int& );
	~Vilao();
};

#endif
