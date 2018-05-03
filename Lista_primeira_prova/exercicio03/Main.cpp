#include<iostream>
#include "Main.h"
#include"Simples_classe.h"
using namespace std;


 int Main::menu() {

	 cout << "|----------------------------------|" << endl;
	 cout << " Escolha a opcao desejada" << endl;
	 cout << "|----------------------------------|" << endl;
	 cout << "1.Atribua um valor aos atributos da classe"<<endl;

	 cout << "2. mostre na tela a quantidade em reais que a residência vai pagar, com e sem o desconto"<<endl;
	 cout << "4. Sair                          		 " << endl;

	 fflush(stdin);
	 int opcao_escolhida;
	 cin >> opcao_escolhida;
	 return opcao_escolhida;
}

 //Atribua um valor aos atributos da classe;
 void Main::_operacao01(Simples_classe* sc, double valor1, double valor2) {
	 sc->set_valor_do_salario_minimo(valor1);
	 sc->set_quantidade_de_quilowatts(valor2);
  }
 //E que mostre na tela a quantidade em reais que a residência vai pagar, 
 //com e sem o desconto.
 void Main::_operacao02(Simples_classe* sc) {
	 cout << "{valorReal:" << sc->valor_em_reais_que_a_residencia_tera_que_pagar();
	 cout << " , ";
	 cout << " valorComDesconto:" << sc->valor_em_reais_que_a_residencia_tera_que_pagar_com_desconto();
	 cout << "}";
  }

 //Mostra os valores dos atributos;
 void Main::_operacao03(Simples_classe* sc) {
	 cout << "{valor_do_salario_minimo:" << sc->get_valor_do_salario_minimo();
	 cout << " , ";
	 cout << "quantidade_de_quilowatts:" << sc->get_quantidade_de_quilowatts() << "}";
  }