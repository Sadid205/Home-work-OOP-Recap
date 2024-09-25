class Car:
    def __init__(self,brand_name)->None:
        self.brand_name  = brand_name
    def get_brand_name(self):
        print(self.brand_name)


class TATA(Car):
    def __init__(self,brand_name)->None:
        super().__init__(brand_name=brand_name)


newTATA = TATA("TATA")
print(newTATA.brand_name)
newTATA.get_brand_name()