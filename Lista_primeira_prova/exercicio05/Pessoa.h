//
//Crie uma classe Pessoa contendo os seguintes atributos :nome, número de contribuinte e idade
#include<iostream>
#include<string>
using namespace std;
#pragma once
#ifndef PESSOA_H
#define PESSOA_H
class Pessoa
{
private:
string nome;
int numero_de_contribuinte;
int idade;

public:


	void set_numero_de_contribuinte( const int& numero_de_contribuinte);
	void set_idade(const int& idade);
	void set_nome(const string& nome);


	int get_numero_de_contribuinte();
	int get_idade();
	string get_nome();

	void exibir();

	Pessoa();
	~Pessoa();
};

#endif // !PESSOA_H
