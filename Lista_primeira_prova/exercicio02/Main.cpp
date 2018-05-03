#include<iostream>
#include "Main.h"
#include"Simples_classe.h"
using namespace std;


 int Main::menu() {

	 cout << "|----------------------------------|" << endl;
	 cout << " Escolha a opcao desejada" << endl;
	 cout << "|----------------------------------|" << endl;
	 cout << "1.Atribua valor aos atributos n1 e n2;"<<endl;

	 cout << "2.Chame o método que altera os valores"<<endl;
	 cout << "3.Mostra os valores dos atributos		 "<<endl;
	 cout << "4. Sair                          		 " << endl;

	 fflush(stdin);
	 int opcao_escolhida;
	 cin >> opcao_escolhida;
	 return opcao_escolhida;
}

 //Atribua valor aos atributos n1 e n2;
  void Main::_operacao01(Simples_classe* sc,int valor){
	  sc->set_n1(valor);
	  sc->set_n2(valor);
  }
// Chame o método que altera os valores;
	void Main::_operacao02(Simples_classe* sc, int valor1, int valor2){
		sc->set_n1(valor1);
		sc->set_n2(valor2);
	}

//Mostra os valores dos atributos;
  void Main::_operacao03(Simples_classe* sc)		 {
	  cout << "{ " << sc->get_n1() << " , " << sc->get_n2() << "}";
 
  }
