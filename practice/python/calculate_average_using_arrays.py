def average_of_array(array,array_size):
    sum = 0
    for i in range(array_size):
     sum = sum + array[i]
    return sum / array_size

print("enter a size of array")
output = int(input())
array = []
for i in range(output):
    print("enter a number")
    num = int(input())
    array.append(num)
average = average_of_array(array, output)
print("average of array is", average)       