#include <iostream>
#include <sstream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
    cout << "cat created" << endl;
    name = "undefined";
    age = 0;
    happy = true;
}

Cat::Cat(string newName, int newAge){
        cout << "cat intitialized" << endl;
        name = newName;
        age = newAge;
        happy = false;
    }

Cat::~Cat(){
    cout << "cat destroyed" << endl;
}

void Cat::speak() {
    if (happy == true){
        cout << "meowwww" << endl;
    }else{
        cout << "hsssss" << endl;
    }
}

void Cat::makeHappy(){
    happy = true;
}

void Cat::makeSad(){
    happy = false;
}

string Cat::getInfo(){
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << ": Age: ";
    ss << age;

    return ss.str();
}