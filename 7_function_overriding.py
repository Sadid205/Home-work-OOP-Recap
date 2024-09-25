# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding
#RDOL
#CSOE

class BaseClass:
    def overriding(self):
        print("I am base class's overriding method.")

class ChildClass(BaseClass):
    def overriding(self):
        # super().overriding()
        print("I am child class's overriding method.")

# If you want to run parent class's method then you can use super keyword.
override = ChildClass()
override.overriding()