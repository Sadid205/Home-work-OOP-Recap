class Byke:
    # constructor
    def __init__(self,brand):
        self.brand = brand
    
    # method
    def display(self):
        print(self.brand)

    # destructor
    def __del__(self):
        print("This is destructor")
    

myByke = Byke("Suziki")
myByke1 = Byke("Honda")
myByke2 = Byke("Hero")

myByke.display()
myByke.display()
myByke1.display()
myByke1.display()
myByke2.display()