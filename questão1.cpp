#include <iostream>

using namespace std;

int main(){
    int x = 0, aux;

    cout << "Digite seus numeros" << endl;
    while(1){
        cin >> aux;

        if(aux == 0)
            break;

        if(aux > x)
            x = aux;
    }
    cout << "O maior numero inserido eh: " << x << "\n" << endl;

    return 0;
}
