
def sum_of_natural_number( natural_number):
   if (natural_number <= 1):
     return natural_number;
   sum = natural_number + sum_of_natural_number(natural_number - 1);
   return sum


print("enter a natural number to find sum:")
output = input()
natural_number = int(output)
result = sum_of_natural_number(natural_number)
print("sum of natural number:",result);