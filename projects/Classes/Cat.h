#include <iostream>

using namespace std;

class Cat{
private:
    bool happy;
    string name;
    int age;
public:
    Cat();
    Cat(string newName, int newAge);
    ~Cat();
    void speak();
    void makeHappy();
    void makeSad();
    string getInfo();
};
