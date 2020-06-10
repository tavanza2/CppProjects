#include <iostream>

using namespace std;

int main(){
    cout << "Hello there" << endl;
    const char array[8] = "array 8";
    int i =0;
    while (1)
    {
        cout << array[i] << endl;
        
        if(i==8){
            i=0;
            break;
        }else{
            i++;
        }
    }
    
    return 0;
}