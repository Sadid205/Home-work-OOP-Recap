// https://www.geeksforgeeks.org/encapsulation-in-cpp/
#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

class Encapsulation{
    private:
        int a,b; 
        // You can not access outside this class.
    public:
        int sum_two_numbers(int x, int y){
            this->a=x;
            this->b=y;
            return x+y;
        }
        void get_numbers(){
            cout<<"a->"<<this->a<<endl;
            cout<<"b->"<<this->b<<endl;
        }
};

int main(){
    Encapsulation En;
    int num = En.sum_two_numbers(4,5);
    cout<<num<<endl;
    //cout<<En.a<<endl; //member "Encapsulation::a" (declared at line 9) is inaccessibleC/C++(265)
    //cout<<En.b<<endl; //member "Encapsulation::a" (declared at line 9) is inaccessibleC/C++(265)
    En.get_numbers();
}