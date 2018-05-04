#pragma once
#include"Time.h"
/*
	uma classe Main para manipular um array de times, 
	onde o usuário poderá adicionar vinte times.
	
*/
#include<iostream>
#include<vector>
using namespace std;

class Main
{
private:
	vector<Time> vetor;


public:
	
	Main();
	void adicionar_vinte_times();

};

