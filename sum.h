#ifndef SUM_H
#define SUM_H

int sum(int t[], int n)
{
    int v=0;
    for (int i=0; i<n; i++)
        v+=t[i];
    return v;

}


#endif // SUM_H
