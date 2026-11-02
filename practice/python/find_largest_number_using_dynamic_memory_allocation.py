print("enter a array size")
output = input()
size = int(output)
if size <= 0:
    print("invalid size")
else:
    array = []
    for index in range(size):
        print("enter a array element at index")
        output = input()
        value = int(output)
        array.append(value)
    print("largest number is:", max(array))
