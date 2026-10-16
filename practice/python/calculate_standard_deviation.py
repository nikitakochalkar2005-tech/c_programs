def deviation(array,array_size):
    average  = 0
    sum = 0
    deviation_of_number = 0
    for index in range(array_size):
        sum = sum + array[index]
    average = sum / array_size
    for index in range(array_size):
        deviation_of_number = average - array[index]
        print("element",array[index],"deviation_of_number is:",deviation_of_number)


print("enter array size")
output = input()
array_size = int(output)
array = []
for index in range(array_size):
    print("enter array element")
    output = input()
    element = int(output);
    array.append(element)
deviation(array,array_size)