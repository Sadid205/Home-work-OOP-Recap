// Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

// CompileTime Polymorphism-> Static Binding | Overloading | Early Binding
// RDOL
// CSOE
// #include <bits/stdc++.h>
#include<iostream>
using namespace std;


class BaseClass{
    public:
        virtual void overriding(){
            cout<<"This is base class's overriding method."<<endl;
        }
};

class ChildClass:public BaseClass{
    public:
        void overriding() override{
            // BaseClass::overriding(); you also call base class's method through scope resolution operator(::)
            cout<<"This is child class's overriding method"<<endl;
        }
};


int main(){
    BaseClass* B = new ChildClass();
    B->overriding();
    delete B;
}