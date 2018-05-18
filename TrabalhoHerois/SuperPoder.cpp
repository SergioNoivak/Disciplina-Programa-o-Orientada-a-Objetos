
#pragma once
#include<string>

#include "SuperPoder.h"
using namespace std;

SuperPoder::SuperPoder(const string& nome, int categoria)
{
	this->nome = nome;
	this->categoria = categoria;
}


SuperPoder::~SuperPoder()
{
}


string SuperPoder::get_nome() {

	return this->nome;
}

int SuperPoder::get_categoria() {

	return  this->categoria;
}

void SuperPoder::set_nome(const string& nome) {

	this->nome = nome;

}
void SuperPoder::set_categoria(const int& categoria) {

	this->categoria = categoria;
}



