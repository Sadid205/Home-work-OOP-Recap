#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

class Car{
    public:
    string brand_name;

    Car(string brand_name){
        this->brand_name = brand_name;
    }
    void get_brand_name(){
        cout<<this->brand_name<<endl;
    }
};

class TATA:public Car{
    public:
        TATA(string brand_name) : Car(brand_name){

        }
};

int main(){
    TATA newTATA("TATA");
    cout<<newTATA.brand_name<<endl;
    newTATA.get_brand_name();
}