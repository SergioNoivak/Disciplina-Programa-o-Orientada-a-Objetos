#include "Calculo.h"


//que n�o poder� ser acessado externamente e dever� ser inicializado com o valor 0.
Calculo::Calculo()
{
	this->SALDO = 0.0;

}


Calculo::~Calculo()
{
}
//   ....classe conter� ainda tr�s m�todos p�blicos CREDITO, DEBITO e GETSALDO

// ....O m�todo CREDITO quando chamado ir� somar o valor recebido como par�metro ao atributo SALDO
void Calculo::CREDITO(const double& valor_recebido_como_par�metro) {
	if (valor_recebido_como_par�metro < 0)
		return;
	this->SALDO += valor_recebido_como_par�metro;
}

/*
.....o m�todo DEBITO ir� subtrair o valor recebido como par�metro do atributo SALDO.*/
void Calculo::DEBITO(const double& valor_recebido_como_par�metro) {
	if (valor_recebido_como_par�metro < 0)
		return;
	this->SALDO -= valor_recebido_como_par�metro;

}
/*
....J� o m�todo GET SALDO ir� apenas retornar o conte�do do atributo SALDO para a classe chamadora*/
double Calculo::GET_SALDO() {
	return this->SALDO;
}
