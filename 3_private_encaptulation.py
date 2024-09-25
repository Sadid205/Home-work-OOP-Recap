# https://www.geeksforgeeks.org/encapsulation-in-cpp/
class Encapsulation:
    def __init__(self):
        self.__a = None #private number
        self.__b = None #private number

    def sum_two_numbers(self,x,y):
        self.__a=x
        self.__b=y
        return x+y
    def get_numbers(self):
        print(f"a->{self.__a}")
        print(f"b->{self.__b}")
    

En = Encapsulation()
En.sum_two_numbers(4,5)
En.get_numbers()
# print(En.__a) AttributeError: 'Encapsulation' object has no attribute '__a'
# print(En.__b) AttributeError: 'Encapsulation' object has no attribute '__a'
