def display_matrix(matrix):
    for row_index in range(3):
        for column_index in range(3):
            print(matrix[row_index][column_index], end="\t")
        print()


def transpose_matrix(matrix):
    for row_index in range(3):
        for column_index in range(3):
            print(matrix[column_index][row_index], end="\t")
        print()


array = [[1,23,1],
         [2,4,5],
         [3,5,6]]
print("Original matrix is: ")
display_matrix(array);
print("Transpose of the matrix is: ")
transpose_matrix(array);      