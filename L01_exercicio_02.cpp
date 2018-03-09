#include<iostream>
#ifdef _WIN32
#include <Windows.h>
#endif // _WIN32
#include<string>
using namespace std;

class Carro{
private:
	string potencia;
	string cor;
	string ano;
	double preco_de_compra;
	double preco_de_venda;
	int identificador_unico;
public:
	void set_potencia(string potencia) {
		this->potencia = potencia;
	}
	void set_cor(string cor) {
		this->cor = cor;
	}
	void set_ano(string ano){
		this->ano = ano;
	}
	void set_preco_venda(double preco_venda) {
		this->preco_de_venda = preco_de_venda;
	}
	void set_preco_compra(double preco_compra) {
		this->preco_de_compra = preco_de_compra;
	}

	string get_potencia() {
		return this->potencia;
	}
	string get_cor() {
		return this->cor;
	}
	string get_ano() {
		return this->ano;
	}
	double get_preco_venda() {
		return this->preco_de_venda;
	}
	double get_preco_compra() {
		return this->preco_de_compra;
	}
	/**
	Retorna true se teve lucro e falso caso contrario
	**/
	bool teve_lucro() {
		return (this->preco_de_venda - this->preco_de_compra) > 0;

	}

};


int main()
{




#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

	return 0;
}

