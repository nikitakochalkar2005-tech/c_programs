def largest_element(array, array_size):
    largest = array[0]
    for index in range(1, array_size):
        if array[index] > largest:
            largest = array[index]
    return largest

print("enter array size:")
output = input()
array_size = int(output)
print("enter array elements:")
array = []
for index in range(array_size):
    output = input()
    array.append(int(output))
largest = largest_element(array, array_size)
print("largest element in array is:", largest)