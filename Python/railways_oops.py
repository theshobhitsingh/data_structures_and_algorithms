class Railways:
    formtype = "RailwayForm"
    def printdata(self):
        print(f"Name is {self.name}")
        print(f"Train is {self.train}")

myApplication = Railways()
myApplication.name = " Shobhit Singh"
myApplication.train = "Vande Bharat"
myApplication.printdata()