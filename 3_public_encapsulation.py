class PublicEncapsulation:
    def __init__(self)->None:
        self.data = None
    
    def get_data(self):
        print(self.data)

pe = PublicEncapsulation()
pe.data=2020
print(pe.data)
pe.get_data()
    