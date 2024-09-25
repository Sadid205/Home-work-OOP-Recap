class Engine:
    def __init__(self,fuel,piston,battery,valves,spark_plugs):
        self.fuel = fuel
        self.piston = piston
        self.battery = battery
        self.valves = valves
        self.spark_plugs = spark_plugs

    def get_engine_info(self):
        print(f"Fuel:{self.fuel}")
        print(f"Piston:{self.piston}")
        print(f"Battery:{self.battery}")
        print(f"Valves:{self.valves}")
        print(f"Spark Plugs:{self.spark_plugs}")
        print("<------------------>")



class Byke:
    def __init__(self,tires,brakes,fuel_tank,seat,frame)->None:
        self.tires = tires
        self.brakes = brakes
        self.fuel_tank = fuel_tank
        self.seat = seat
        self.frame = frame
    
    def get_byke_info(self):
        print(f"Tires:{self.tires}")
        print(f"Brakes:{self.brakes}")
        print(f"Fuel Tank:{self.fuel_tank}")
        print(f"Seat:{self.seat}")
        print(f"Frame:{self.frame}")
        print("<------------------>")


class Honda(Engine,Byke):
    def __init__(self, fuel, piston, battery, valves, spark_plugs,tires,brakes,fuel_tank,seat,frame):
        super().__init__(fuel, piston, battery, valves, spark_plugs)
        Byke.__init__(self,tires,brakes,fuel_tank,seat,frame)


HondaCBR = Honda("Pettrol","15MM","Rod rider YTX4L-BS","Honda Vulve","CR8E","MRF","ABS","Honda Tank","Double","Honda Frame")
HondaCBR.get_byke_info()
HondaCBR.get_engine_info()