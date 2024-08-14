def max_visited_speciality(patient_medical_speciality_list, medical_speciality):
    a = 0
    b = 0
    c = 0
    for i in patient_medical_speciality_list:
        speciality = ""
        if (i == 'P'):
            a = a+1
        elif (i == 'O'):
            b = b+1
        elif (i == 'E'):
            c = c+1

        if a > b and a > c:
            speciality = "Pediatrics"
        elif b > a and b > c:
            speciality = "Orthopedics"
        elif c > b and c > a:
            speciality = "ENT"

    return speciality


# provide different values in the list and test your program
patient_medical_speciality_list = [
    301, 'P', 302, 'P', 305, 'P', 401, 'E', 656, 'E']
medical_speciality = {"P": "Pediatrics", "O": "Orthopedics", "E": "ENT"}
speciality = max_visited_speciality(
    patient_medical_speciality_list, medical_speciality)
print(speciality)