def prime_number_between_two_intervals(start_number,end_number):
    for number in range(end_number + 1):
        prime = 1
        i = 5
        if( number < 2):
            prime = 0 
        if(number == 2 and number == 3):
            prime = 1
        if(number >3 and ( number % 2 == 0 or number % 3 == 0)):
            prime = 0
        for i  in range(i*i< number):
            if( number % i == 0 and number % (i + 2)):
                prime = 0;
        if(prime == 1):
            print("it a prime number",number)


prime_number_between_two_intervals(2,10)