class Train:
    def __init__(self, name, fare, seats):
        self.name = name
        self.fare = fare
        self.seats = seats

    def getStatus(self):
        print(
            f"The train is {self.name} and the total seats available are {self.seats}")

    def getFare(self):
        print(f"The ticket-price of the Train is {self.fare}")

    def bookTicket(self):
        if self.seats > 0:
            print(
                f"Your ticket has been booked. Your seat number is {self.seats}")
            self.seats = self.seats - 1
        else:
            print("Sorry! The Train is full. Kindly try in Tatkal")


Vande_Bharat = Train("Vande_Bharat : 10101", "₹ 1000/-", 3)
Vande_Bharat.getStatus()
Vande_Bharat.getFare()
Vande_Bharat.bookTicket()
Vande_Bharat.getStatus()
Vande_Bharat.bookTicket()
Vande_Bharat.getStatus()
Vande_Bharat.bookTicket()
Vande_Bharat.getStatus()
Vande_Bharat.bookTicket()
Vande_Bharat.getStatus()
