class Calculator:
    def devide(self,*args):
        if len(args)==2:
            return args[0]/args[1]
        elif len(args)==3:
            return (args[0]/args[1])/args[2]
        elif len(args)==4:
            return ((args[0]/args[1])/(args[2]/args[3]))


c = Calculator()
print(c.devide(20,2))
print(c.devide(300,2,3))
print(c.devide(500,4,3,2))