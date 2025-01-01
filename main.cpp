#include <iostream>
using namespace std;

int main() 
{
    {
    string V[5];
    int i, l, z;

    i = 0;
    l = 0;
    z = 0;
    V[0] = "Mia Martini";
    V[1] = "Anna Oxa";
    V[2] = "Adriano Celentano";
    V[3] = "Renato Zero";
    V[4] = "Riccardo Cocciante";
    string W[5];

    W[0] = "Bob Dylan";
    W[1] = "Otis Redding";
    W[2] = "John Lennon";
    W[3] = "Elvis Presley";
    W[4] = "Ray Charles";
    while (i <= 4) 
    {
        cout << "Il " << i + 1 << " cantante è " << W[i] << "." << endl;
        i = i + 1;
    }
    int X[10];

    while (l <= 9)
    {
        X[l] = l + 1;
        cout << "Il " << l + 1 << "° numero è " << X[l] << endl;
        if(X[l] % 2 == 0)
        {
            cout << "Numero pari: " << X[l] << endl;
        }
        else
        {
            cout << "Numero dispari: " << X[l] << endl;
        }
        l = l + 1;
    }
    int Y[10];

    while (z < 10) 
    {
        Y[z] = 2 * (z + 1);
        cout << "Il " << z + 1 << "° numero è " << Y[z] << endl;
        z = z + 1;
    }
}



}




