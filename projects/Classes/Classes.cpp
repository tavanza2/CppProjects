#include <iostream>
#include "Cat.h"

using namespace std;



int main(){
    //cout << "Hello there" << endl;
    
    
    Cat cat1;
    Cat cat2("bleu", 7);

    cout << cat1.getInfo() << endl;
    cout << cat2.getInfo() << endl;


    cat1.speak();
    cat2.speak();
    return 0;
}