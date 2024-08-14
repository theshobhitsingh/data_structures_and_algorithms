# def far(cel):
#    return (cel* (9/5)) + 32 
# cel=int(input("Enter the temperature in Celsius: "))
# t=far(cel)
# print("The temperature in Fahrenheit is "+ str(t))
#lex_auth_01269361601342668881
def calculate_total_ticket_cost(no_of_adults, no_of_children):
    total_ticket_cost=0
    total_ticket_cost = ((no_of_adults*(37550.0))+ (no_of_children*(1/3*37550.0)))
    total_cost = total_ticket_cost+ (7/100* total_ticket_cost)

    return total_ticket_cost


#Provide different values for no_of_adults, no_of_children and test your program
total_ticket_cost=calculate_total_ticket_cost(1,2)
print("Total Ticket Cost:",total_ticket_cost)
