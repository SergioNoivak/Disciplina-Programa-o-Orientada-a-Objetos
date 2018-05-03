#include "Conta_corrente.h"



Conta_corrente::Conta_corrente()
{
	this->saldo = 0;
}


Conta_corrente::~Conta_corrente()
{
}

/*
...Possui ainda os métodos cadastrar_senha
que recebe uma senha como parâmetro e altera o atributo senha...
*/
void Conta_corrente::cadastrar_senha(const string &senha){
		this->senha = senha;
}

/*
....e o método alterar_senha que recebe como
parâmetro a senha antiga e a nova senha....*/

void Conta_corrente::alterar_senha(const string &senha_antiga, const string &nova_senha){

	if (senha_antiga.compare(this->senha) != 0)
		return;
	this->senha = nova_senha;
}


void Conta_corrente::debitar(const double& valor, const int& numero_da_conta, const string& senha){
if (valor < 0||this->numero!=numero_da_conta||this->senha.compare(senha)!=0)
		return;
	this->saldo -= valor;
}
void Conta_corrente::creditar(const double& valor, const int &numero_da_conta, const string &senha){
if (valor < 0 || this->numero != numero_da_conta || this->senha.compare(senha) != 0)
		return;
	this->saldo += valor;
}
