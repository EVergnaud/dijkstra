//START ET END EN PRIVATE DE ALGORITHME!!


#include "Algorithme.h"


Algorithme::Algorithme(spNode start,spNode end, float connectionDelay)
{
	_start=start;
	_end=end;
	_connectionDelay=connectionDelay;
}
Algorithme::Algorithme(void)
{
	_connectionDelay=0;
}


Algorithme::~Algorithme(void)
{
}
