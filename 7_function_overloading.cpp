#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;
class Calculator{
    // int x,y,z;
    // Calculator(int x,int y,int z){
    //     this->x=x;
    //     this->y=y;
    //     this->z=z;
    // }
    public:
        int devide(int a,int b,int c){
            return (a/b)/c;
        }
        float devide(int a,int b){
            return a/b;
        }
        double devide(double a,double b){
            return a/b;
        }
};


int main(){
    Calculator c;
    int d = c.devide(100,2,2);
    float e = c.devide(99.3,2.4);
    double f = c.devide(100,5);
    cout<<"d-> "<<d<<endl;
    cout<<"e-> "<<e<<endl;
    cout<<"f-> "<<f<<endl;
}
