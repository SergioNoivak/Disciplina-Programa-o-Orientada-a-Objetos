#include "Personagem.h"
#include<string>
#include<vector>
#include"SuperPoder.h"
using namespace std;



Personagem::Personagem(const string& nome, const string& nomeVidaReal)
{
	this->nome = nome;
	this->nomeVidaReal = nomeVidaReal;
	this->quantidade_superpoderes = 0;

}


string Personagem::get_nome() {

	return this->nome;
}
string Personagem::get_nomeVidaReal() {

	return this->nomeVidaReal;
}

void Personagem::set_nome(const string&         nome)        {
	this->nome = nome;

}
void Personagem::set_nomeVidaReal(const string& nomeVidaReal){
	this->nomeVidaReal = nomeVidaReal;
}

void Personagem::adicionaSuperpoder(SuperPoder* sp) {

	if (sp == NULL)
		return;

	if (this->quantidade_superpoderes < 4) {
		this->poderes.push_back(sp);
		this->quantidade_superpoderes++;
		return;	
	}
}

int Personagem::get_poder_total() {

	int soma = 0;
	for (const auto corrente : this->poderes) {

		soma += corrente->get_categoria();
	}
	return soma;
}




