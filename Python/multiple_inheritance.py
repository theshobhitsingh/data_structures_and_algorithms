class  Employee: # 1st parent class
    company = 'VISA'
    ecode =121

class Freelancer : # 2nd parent class
    company = 'Fiverr'
    level = 0

    def upgradeLevel (self):
        self.level = self.level+1

class Programmer (  Employee , Freelancer):
    name = 'Shobhit Singh' # Child class of Parent 1 & Parent 2 class

p = Programmer()
print(p.company)
print(p.ecode)
print(p.level)
p.upgradeLevel()
print(p.level)