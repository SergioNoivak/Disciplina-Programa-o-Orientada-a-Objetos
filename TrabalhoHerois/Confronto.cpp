#include "Confronto.h"
#include "SuperHeroi.h"
#include "Vilao.h"



Confronto::Confronto()
{
}
int Confronto::executar(SuperHeroi* super_heroi, Vilao* vilao) {

	if (super_heroi == NULL || vilao == NULL)
		return -1;

	else if (super_heroi->get_poder_total() > vilao->get_poder_total())
		return 1;

	else if (super_heroi->get_poder_total() < vilao->get_poder_total())
		return 2;

	return 0;
}
