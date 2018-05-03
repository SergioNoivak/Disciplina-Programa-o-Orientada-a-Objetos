#include "Classe_principal.h"
#include<iostream>
#include<vector>
using namespace std;

Classe_principal::Classe_principal()
{
}


Classe_principal::~Classe_principal()
{
}


void Classe_principal::informar_quantas_pessoas_serão_cadastradas_em_um_vetor(int quantas) {
	this->tamanho_vetor = quantas;
}

void Classe_principal::cadastrar() {
	int quantas;
	cin >> quantas;
	this->informar_quantas_pessoas_serão_cadastradas_em_um_vetor(quantas);
	for (int i = 0; i < quantas; i++) {
		string nome;
		int numero_de_contribuinte;
		int idade;
		cin >> nome >> numero_de_contribuinte >> idade;
		Pessoa p;
		p.set_idade(idade);
		p.set_nome(nome);
		p.set_numero_de_contribuinte(numero_de_contribuinte);
		this->vetor.push_back(p);
	}
}
/*
Após preencher todas as informações deve imprimir o dados de todos*/
void Classe_principal::exibir() {
	for (auto &elemento : this->vetor) {
		elemento.exibir();
		cout << endl;
	}
}