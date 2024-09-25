#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

class Engine{
    public:
        string fuel,piston,battery,valves,spark_plugs;
        Engine(string fuel,string piston,string battery,string valves,string spark_plugs){
            this->fuel = fuel;
            this->piston = piston;
            this->battery = battery;
            this->valves = valves;
            this->spark_plugs = spark_plugs;
        }

        void get_engine_info(){
            cout<<"Fuel: "<<fuel<<endl;
            cout<<"Piston: "<<piston<<endl;
            cout<<"Battery: "<<battery<<endl;
            cout<<"Valves: "<<valves<<endl;
            cout<<"Spark plugs: "<<spark_plugs<<endl;
            cout<<"<----------------->"<<endl;
        }
};

class Byke:public Engine{
    public:
        string tires,brakes,fuel_tank,seat,frame;
        Byke(string tires,string brakes,string fuel_tank,string seat,string frame,string fuel,string piston,string battery,string valves,string spark_plugs):Engine(fuel,piston,battery,valves,spark_plugs){
            this->tires = tires;
            this->brakes = brakes;
            this->fuel_tank = fuel_tank;
            this->seat = seat;
            this->frame = frame;
        }

        void get_byke_info(){
            cout<<"Tires: "<<tires<<endl;
            cout<<"Brakes: "<<brakes<<endl;
            cout<<"Fuel Tank: "<<fuel_tank<<endl;
            cout<<"Seat: "<<seat<<endl;
            cout<<"Frame: "<<frame<<endl;
            cout<<"<----------------->"<<endl;
        }
};


class Honda:public Byke{
    public:
        Honda(string tires,string brakes,string fuel_tank,string seat,string frame,string fuel,string piston,string battery,string valves,string spark_plugs):Byke(tires,brakes,fuel_tank,seat,frame,fuel,piston,battery,valves,spark_plugs){
            
        }
};

int main(){
    Honda HondaCBR("Pettrol","15MM","Rod rider YTX4L-BS","Honda Vulve","CR8E","MRF","ABS","Honda Tank","Double","Honda Frame");
    HondaCBR.get_byke_info();
    HondaCBR.get_engine_info();
}