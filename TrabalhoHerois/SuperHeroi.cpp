#include "SuperHeroi.h"
#include"Personagem.h"


SuperHeroi::SuperHeroi(const string& nome, const string& nomeVidaReal):Personagem(nome,nomeVidaReal)
{
	
	
}

int SuperHeroi::get_poder_total() {
	return (int) Personagem::get_poder_total()*1.1;
}
SuperHeroi::~SuperHeroi()
{
}


ostream& operator<< (ostream& stream, SuperHeroi* sp) {

	stream << "{" << sp->get_nome() << " , " << sp->get_nomeVidaReal()<<"}";
	return stream;

 }

