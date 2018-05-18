#pragma once
#include "Jogo.h"
#include"SuperHeroi.h"
#include"Vilao.h"
#include<string>
#include<vector>
#include"SuperPoder.h"
#include "Confronto.h"
using namespace std;

//a) crie um objeto da classe SuperHeroi e um objeto da classe Vilao.
//b) crie os superpoderes a atribua - os ao objetos SuperHeroi e Vilao.
//c) crie um objeto da classe Confronto e invoque o método executar,
//passando como parâmetro o super - herói e o vilão.
//d) Mostre uma mensagem na tela dizendo quem é que vence o confronto.




void Jogo::main() {
	//....a) crie um objeto da classe SuperHeroi e um objeto da classe Vilao....

	SuperHeroi* super_heroi = new SuperHeroi("DeadPull", "Wayde Willson");
	string nomeVilao = "Hibernault";
	Vilao* vilao = new Vilao(nomeVilao, nomeVilao,100);

	//...b) crie os superpoderes a atribua - os ao objetos SuperHeroi e Vilao...
	SuperPoder* sp1= new SuperPoder("Imortalidade",3);
	SuperPoder* sp2= new SuperPoder("Regeneracao",3);
	SuperPoder* sp3= new SuperPoder("Hiper forca",2);
	SuperPoder* sp4= new SuperPoder("Agilidade",1);
	SuperPoder* sp5= new SuperPoder("Super forca",4);
	SuperPoder* sp6= new SuperPoder("Invulnerabilidade",3);
	SuperPoder* sp7= new SuperPoder("Super forca",2);
	SuperPoder* sp8= new SuperPoder("Capacete",1);
	SuperPoder* sp9= new SuperPoder("Poder Proibido",9999999999999);

	super_heroi->adicionaSuperpoder(sp1);
	super_heroi->adicionaSuperpoder(sp2);
	super_heroi->adicionaSuperpoder(sp3);
	super_heroi->adicionaSuperpoder(sp4);
	vilao->adicionaSuperpoder(sp5);
	vilao->adicionaSuperpoder(sp6);
	vilao->adicionaSuperpoder(sp7);
	vilao->adicionaSuperpoder(sp8);


	cout<<super_heroi->get_nome();
	cout << "*************";
	cout << super_heroi;
	cout << endl;

	//...c) crie um objeto da classe Confronto e invoque o método executar,
	//passando como parâmetro o super - herói e o vilão...
	cout<<Confronto::executar(super_heroi, vilao)<<endl;



}





Jogo::Jogo()
{
}


Jogo::~Jogo()
{
}
