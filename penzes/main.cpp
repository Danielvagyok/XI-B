#include <iostream>
#include  <vector>

using namespace std;

void backtracking(int ermek[] , int n , int osszeg , vector<int> fizetes ,  int eddig = 0)
{
    if(eddig == osszeg)
    {

        for(int i = 0 ; i < fizetes.size() ; i++)
        {
            cout << fizetes[i] << "  ";
        }
        cout << endl;
    }
    bool in = 0;

    for(int i = 0 ; i < n ; i++){
        if(ermek[i] + eddig <= osszeg)
        {
            in = 1;
            fizetes.push_back(ermek[i]);
            backtracking(ermek,n,osszeg,fizetes,eddig+ermek[i]);
            fizetes.pop_back();
        }
    }
    if(in == 0)
        fizetes.pop_back();
}

int main()
{
    int ermek[3] = {1,5,10};
    vector<int> fizetes;

    backtracking(ermek,3,10,fizetes);

    return 0;
}
