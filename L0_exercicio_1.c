#include<iostream>
#ifdef _WIN32
#include <Windows.h>
#endif // _WIN32

using namespace std;


void preenche_vetor(int* vetor, int size_v) {

	int i = 0;
	for (i = 0; i < size_v; i++) 
		cin >> vetor[i];
}

int retorna_impar(int numero) {
	if (numero % 2 == 0)
		return 0;
	return 1;
}


void imprime_impares(int* vetor, int size_v, int (*ponteiroParaFuncao)(int)) {


	int i;
	for (i = 0; i < size_v; i++)
		if ((ponteiroParaFuncao(vetor[i]))==1)
			cout << vetor[i]<<" ";

}

int main()
{
	
	int vetor[10];
	preenche_vetor(vetor, 10);
	imprime_impares(vetor, 10,retorna_impar);

#ifdef _WIN32
	system("PAUSE");
#endif // _WIN32

	return 0;
}

