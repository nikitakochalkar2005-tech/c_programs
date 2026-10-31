def access_array_element_using_pointer(array_row_size, array_column_size, array):
    for row_index in range(array_row_size):
        for column_index in range(array_column_size):
            print(array[row_index][column_index], end="\t")
        print()

print("Enter the number of rows in the array:")
rows = int(input())
print("Enter the number of columns in the array:")
columns = int(input())
array = [[]for _ in range(rows)]
for row_index in range(rows):
    for column_index in range(columns):
        print(f"Enter the element at [{row_index}][{column_index}]:")
        element = int(input())
        array[row_index].append(element)
print("The elements of the array are:")
access_array_element_using_pointer(rows, columns, array)