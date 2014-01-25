#ifndef GEN_H
#define GEN_H

#include <cstdlib>
#include <ctime>


int generuj(int t[], int n)
{

    using namespace std;
    for(int i=0; i<n; i++)
    {
        t[i]=rand()%100;
        cout << t[i] << endl;
    }

}


#endif // GEN_H
