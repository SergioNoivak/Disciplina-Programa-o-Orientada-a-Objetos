#include "Calculo.h"


//que não poderá ser acessado externamente e deverá ser inicializado com o valor 0.
Calculo::Calculo()
{
	this->SALDO = 0.0;

}


Calculo::~Calculo()
{
}
//   ....classe conterá ainda três métodos públicos CREDITO, DEBITO e GETSALDO

// ....O método CREDITO quando chamado irá somar o valor recebido como parâmetro ao atributo SALDO
void Calculo::CREDITO(const double& valor_recebido_como_parâmetro) {
	if (valor_recebido_como_parâmetro < 0)
		return;
	this->SALDO += valor_recebido_como_parâmetro;
}

/*
.....o método DEBITO irá subtrair o valor recebido como parâmetro do atributo SALDO.*/
void Calculo::DEBITO(const double& valor_recebido_como_parâmetro) {
	if (valor_recebido_como_parâmetro < 0)
		return;
	this->SALDO -= valor_recebido_como_parâmetro;

}
/*
....Já o método GET SALDO irá apenas retornar o conteúdo do atributo SALDO para a classe chamadora*/
double Calculo::GET_SALDO() {
	return this->SALDO;
}
