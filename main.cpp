#include <iostream>
#include "gen.h"
#include "display.h"
#include "min.h"

int main()
{
	int tab[11];
	int n=10;
	generuj(tab, n);
	min(tab,n);
	disp(tab,n);
	
	return 0;
}
