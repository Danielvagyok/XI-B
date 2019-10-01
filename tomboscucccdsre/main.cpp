#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream yes("input.in");

    int m , n , masikfel;
    bool szimet = 1;

    cin >> m;
    cin >> n;

    int szimi[(n+1)/2];

    for(int i = 0 ; i < m ; i++){

        for(int j = 0 ; j < n ; j++){
            if(j < (n-1)/2){
                yes >> szimi[j];
            }else if(j > (n-1)/2){
                yes >> masikfel;
                if(masikfel != szimi[n-j-1]){
                    szimet = 0;
                }
            }else{
                yes >> masikfel;
            }
        }
        if(szimet == 0){
            break;
        }
    }

    if(szimet == 1){
        cout << "DA";
    }else{
        cout << "NU";
    }

    return 0;
}
