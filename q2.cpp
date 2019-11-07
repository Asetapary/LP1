#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

int main(){
    int lanc, i, fds, ar[6] = {};
    cin >> lanc;

    srand(time(NULL));

    for(i = 0; i < lanc; i++){
        fds = rand() %6;
        switch(fds){
            case 0:
                ar[fds]++;
                break;
            case 1:
                ar[fds]++;
                break;
            case 2:
                ar[fds]++;
                break;
            case 3:
                ar[fds]++;
                break;
            case 4:
                ar[fds]++;
                break;
            case 5:
                ar[fds]++;
                break;
        }
    }
    for(i = 0; i < 6; i++){
        cout << "A face " << i + 1 << " aparece em % " << (float)ar[i] / lanc * 100 << endl;
    }
}
