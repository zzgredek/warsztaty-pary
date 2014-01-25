
void disp(int t[],int n)
{
    using namespace std;
    for (int i=0; i<n; i++)
        cout << t[i] << endl;
}






int generuj(int t[], int n)
{

    using namespace std;
    for(int i=0; i<n; i++)
        t[i]=rand()%100;


}


int max(int tab[], int n) {
	int maximum=0;
	for(int i=0;i<n;i++)
		if(tab[i]>maximum) maximum = tab[i];
	
	std::cout<<"wartosc maximum : "<<maximum;
}
int min(int tab[], int n) {
	int minimum=2000000000;
	for(int i=0;i<n;i++)
		if(tab[i]<minimum) minimum = tab[i];
	
	std::cout<<"wartosc minimum : "<<minimum;
}

int sum(int t[], int n)
{
    int v=0;
    for (int i=0; i<n; i++)
        v+=t[i];
    return v;

}


