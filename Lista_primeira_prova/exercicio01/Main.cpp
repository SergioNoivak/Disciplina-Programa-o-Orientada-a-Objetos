#include<iostream>
#include "Main.h"
#include"Contador.h"
using namespace std;


 int Main::menu() {

	 cout << "|----------------------------------|" << endl;
	 cout << " Escolha a opcao desejada" << endl;
	 cout << "|----------------------------------|" << endl;
	 cout << "1.Que atribua um valor ao atributo n�mero, atrav�s do set_numero"<<endl;

	 cout << "2.Chame o m�todo que incrementa o n�mero"<<endl;
	 cout << "3.Mostra o n�mero						  "<<endl;
	 cout << "4.Chame o m�todo que desfaz o incremento"<<endl;
	 cout << "5.Mostra o n�mero novamente			  "<<endl;
	 fflush(stdin);
	 int opcao_escolhida;
	 cin >> opcao_escolhida;
	 return opcao_escolhida;
}



 Main::Main() {
 }

 //Que atribua um valor ao atributo n�mero, atrav�s do set_numero;
 void Main::_operacao01(Contador* contador, const int& valor_a_ser_atribuido) {
	 if (contador == NULL)
		 return;
	 contador->set_numero(valor_a_ser_atribuido);	
 }

 //Chame o m�todo que incrementa o n�mero;
 void Main::_operacao02(Contador* contador) {
	 if (contador == NULL)
		 return;
	 contador->somar_um();
 }

 //Mostra o n�mero;
 //Mostra o n�mero novamente;
 void Main::_operacao03(Contador* contador) {
	 if (contador == NULL)
		 return;
	 cout << contador->get_numero();
 }
// Chame o m�todo que desfaz o incremento;
 void Main::_operacao04(Contador* contador) {
	 if (contador == NULL)
		 return;
	  contador->desfazer_incremento();
 }

 void Main::_operacao_geral(Contador* contador) {
	
	 if (contador == NULL)
		 return;
	 
	 int valor_a_ser_atribuido;
	 cin >> valor_a_ser_atribuido;
	 Main::_operacao01(contador,valor_a_ser_atribuido);
	 Main::_operacao02(contador);
	 Main::_operacao03(contador);
	 Main::_operacao04(contador);
	 Main::_operacao03(contador);
 }


