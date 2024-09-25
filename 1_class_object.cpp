#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;
class Byke{
    string brand;
    public:
    // Constructor
    Byke(string brand){
       this->brand = brand;
    }

    // Method
    void display(){
        cout<<this->brand<<endl;
    }

    // destructor
    ~Byke(){
        cout<<"This is destructor"<<endl;
    }
};

int main(){
    Byke myByke = Byke("Suzuki");
    Byke myByke1 = Byke("Honda");
    Byke myByke2 = Byke("Hero");
    myByke.display();
    myByke.display();
    myByke1.display();
    myByke2.display();

}