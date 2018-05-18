#pragma once
#ifndef SUPERHEROI_H
#define SUPERHEROI_H
#include "Personagem.h"
#include<iostream>

using namespace std;

class SuperHeroi :public Personagem
{

public:
	int get_poder_total();
	SuperHeroi(const string&, const string&);
	~SuperHeroi();
	friend ostream& operator<< (ostream& stream,  SuperHeroi* sp);

};

#endif // !SUPERHEROI_H
