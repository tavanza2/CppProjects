#include <iostream>
using namespace std;


int main(){

    int table[10][10];

    cout << "test" << endl;
    cout << "test2" << endl;

    int w = 1;
    int p = 1;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            table[i][j] = w*p;
            w++;
        }
        p++;
        w=1;
    }

    for(int h=0; h<10; h++){
        for(int k=0; k<10; k++){
            cout << table[h][k] << " " << flush;
        }
        cout << endl;
    }


    cout << sizeof(table) << endl;
}