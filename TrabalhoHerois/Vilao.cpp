#include "Vilao.h"



Vilao::Vilao(const string& nome, const string& nomeVidaReal, const int& tempo_de_prisao):Personagem(nome,nomeVidaReal)
{
	this->tempo_de_prisao = tempo_de_prisao;
}


Vilao::~Vilao()
{
}




int  Vilao::get_tempo_de_prisao()           {
	return this->tempo_de_prisao;
} 
void Vilao::set_tempo_de_prisao(const int& tempo_de_prisao) {
	this->tempo_de_prisao = tempo_de_prisao;
}

