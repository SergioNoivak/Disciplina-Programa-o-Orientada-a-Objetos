#include<iostream>
#include "Main.h"
#include"Time.h"
#include<string>
using namespace std;
Main::Main() {

}
void Main::adicionar_vinte_times() {
	Time t_aux;
	string nome;
	string data_de_fundacao;
	string estadio;
	for (int i = 0; i < 20; i++) {
		cin >>nome;
		cin >> data_de_fundacao >> estadio;
		t_aux.set_estadio(estadio);
		t_aux.set_data_de_fundacao(data_de_fundacao);
		t_aux.set_nome(nome);
		this->vetor.push_back(t_aux);
	}
}

