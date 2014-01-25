int max(int tab[], int n) {
	int maximum=0;
	for(int i=0;i<n;i++)
		if(tab[i]>maximum) maximum = tab[i];
	
	std::cout<<"wartosc maximum : "<<maximum;
}
