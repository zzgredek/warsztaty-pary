int min(int tab[], int n) {
	int minimum=2000000000;
	for(int i=0;i<n;i++)
		if(tab[i]<minimum) minimum = tab[i];
	
	std::cout<<"wartosc minimum : "<<minimum;
}
