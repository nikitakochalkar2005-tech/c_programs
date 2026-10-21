def add_matrix(row_size, column_size,first_array,second_array):
    print("\nSum of both matrices:")
    for index_row in range(row_size):
        for index_column in range(column_size):
            sum = (first_array[index_row][index_column] + second_array[index_row][index_column])
            print(sum, end="\t")
        print()



print("enter a column size:")
output = input()
column_size = int(output);
print("enter a row size:");
output = input()
row_size = int(output)
first_array = [ ]
second_array = []
for row in range(row_size):
    current_row = []
    for column in range(column_size):
        print("enter first array element:")
        output = input()
        current_row.append(int(output))
    first_array.append(current_row)
    print("\n")
for row in range(row_size):
    current_row = []
    for column in range(column_size):
        print("enter second array element:")
        output = input()
        current_row.append(int(output))
    second_array.append(current_row)
    print("\n")
add_matrix(row_size,column_size,first_array,second_array);
