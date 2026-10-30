def display_first_matrix_element(row_size, column_size, matrix):
    for row_index in range(row_size):
        for column_index in range(column_size):
            print(matrix[row_index][column_index],end=" ")
        print("\n")    


def display_second_matrix_element(row_size, column_size, matrix):
    for row_index in range(row_size):
        for column_index in range(column_size):
            print(matrix[row_index][column_index],end=" ")
        print("\n")    

def multiply_two_matrices(first_matrix_row_size, first_matrix_column_size, second_matrix_row_size, second_matrix_column_size, first_matrix, second_matrix):
    if first_matrix_column_size != second_matrix_row_size:
        print("matrix multiplication is not possible")
        return
    for row_index in range(first_matrix_row_size):
        for column_index in range(second_matrix_column_size):
            result = 0
            for counter in range(first_matrix_column_size):
                result += first_matrix[row_index][counter] * second_matrix[counter][column_index]
            print(result, end=" ")
        print("\n")




print("enter a first matrix row size:")
output = input()
first_matrix_row_size = int(output)
print("enter first matrix column size")
output = input()
first_matrix_column_size = int(output)
print("enter second matrix row size")
output = input()
second_matrix_row_size = int(output)
print("enter second matrix column size")
output = input()
second_matrix_column_size = int(output)
first_matrix = [[] for _ in range(first_matrix_row_size)]
second_matrix = [[] for _ in range(second_matrix_row_size)]
for row_index in range(first_matrix_row_size):
    for column_index in range(first_matrix_column_size):
        print("enter a matrix element","[",row_index,"]","[",column_index,"]")
        output = input()
        first_matrix[row_index].append(int(output))

for row_index in range(second_matrix_row_size):
    for column_index in range(second_matrix_column_size):
        print("enter a matrix element","[",row_index,"]","[",column_index,"]")
        output = input()
        second_matrix[row_index].append(int(output))

print("first matrix elements are:")
display_first_matrix_element(first_matrix_row_size, first_matrix_column_size, first_matrix)
print("second matrix elements are:")
display_second_matrix_element(second_matrix_row_size, second_matrix_column_size, second_matrix)
print("multiplication of two matrices is:")
multiply_two_matrices(first_matrix_row_size,first_matrix_column_size, second_matrix_row_size, second_matrix_column_size, first_matrix, second_matrix )    
