#include "Simples_classe.h"



Simples_classe::Simples_classe()
{
}


Simples_classe::~Simples_classe()
{
}


double Simples_classe::get_valor_do_salario_minimo() {
	return this->valor_do_salario_minimo;
};
double Simples_classe::get_quantidade_de_quilowatts() {
	return this->quantidade_de_quilowatts;
};
void Simples_classe::set_valor_do_salario_minimo(double valor_do_salario_minimo) {
	this->valor_do_salario_minimo = valor_do_salario_minimo;
};

void Simples_classe::set_quantidade_de_quilowatts(double quantidade_de_quilowatts) {
	this->quantidade_de_quilowatts = quantidade_de_quilowatts;
};

//Crie um método que retorne o valor em reais de cada quilowatt;
double Simples_classe::retorna_em_reais_o_valor_de_cada_quilowatt() {
	return this->valor_do_salario_minimo*(1.0 / 700.0);
}

//Crie um método que retorne o valor em reais que a residência terá que pagar;
double Simples_classe::valor_em_reais_que_a_residencia_tera_que_pagar() {

	return this->retorna_em_reais_o_valor_de_cada_quilowatt()*this->quantidade_de_quilowatts;

}

//Crie um método que retorne o valor em 
//reais que a residência terá que pagar com desconto de 10 % ;
double Simples_classe::valor_em_reais_que_a_residencia_tera_que_pagar_com_desconto() {
	return this->valor_em_reais_que_a_residencia_tera_que_pagar()*0.8;
}

