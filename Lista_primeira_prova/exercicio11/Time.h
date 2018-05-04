#pragma once
#ifndef TIME_H
#define TIME_H

#include<string.h>
#include<iostream>
using namespace std;


class Time
{

	/*  
		.....como atributos, nome, data de fundação, estádio.....   
																		*/
	string nome;
	string data_de_fundacao; 
	string estadio;




public:

	string get_nome();
	string get_data_de_fundacao();
	string get_estadio();

	void set_nome(string novo);
	void set_data_de_fundacao(string novo);
	void set_estadio(string	novo);

	Time();
	~Time();
};

#endif // TIME_H



