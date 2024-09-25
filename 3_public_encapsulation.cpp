#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

class PublicEncapsulation{
    public:
        int data;

        void get_data(){
            cout<<data<<endl;
        }
};

int main(){
   PublicEncapsulation  pe;
   pe.data=2002;
    cout<<pe.data<<endl;
    pe.get_data();
}