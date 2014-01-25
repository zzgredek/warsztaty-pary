#include <iostream>
#include "gen.h"
#include "display.h"
#include "min.h"
#include "sum.h"
#include "max.h"
#include "utils.h"


int main()
{
    using namespace std;
    int tab[11];
	int n=10;
	generuj(tab, n);
	disp(tab,n);
	min(tab,n);
	max(tab,n);
    cout << "suma: " << sum(tab,n) << endl;

	return 0;
}
