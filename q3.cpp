#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int main(){
    int tent, num;

    srand(time(NULL));
    num = rand() %100;

    cout << "Adivinhe o numero entre 1 e 100.\n" << endl;

    while(tent != num){
        cin >> tent;
        if(tent < num)
            cout << "Muito baixo. Tente novamente\n" << endl;
        if(tent > num)
            cout << "Muito alto. Tente novamente\n" << endl;
        if(tent == num)
            cout << "Parabens. Voce acertou o numero\n" << endl;
    }

    return 0;
}
