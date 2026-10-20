def multiply_matrices(first_matrix, second_matrix):
    result = [[0 for _ in range(len(second_matrix[0]))] for _ in range(len(first_matrix))]
    for index_row in range(len(first_matrix)):
        for index_column in range(len(second_matrix[0])):
            for counter in range(len(second_matrix)):
                result[index_row][index_column] += first_matrix[index_row][counter] * second_matrix[counter][index_column]
    return result   

first_matrix = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]  
second_matrix = [[1, 2], [3, 4], [5, 6]]
result = multiply_matrices(first_matrix, second_matrix)
for row in result:
    print(row)
