#@brief this function display the array elements
#@param row_size:array mai row ki size kitani hai 
#@param column_size:array mai column ki size kitani hai
#@return void

def print_array_elements(row_size, column_size, array):
   for row_index in range(row_size):
      for column_index in range(column_size):
         print(array[row_index][column_index], end="  ")
      print()
       
#@brief this function sort the elements
#@param row_size:array mai row ki size kitani hai 
#@param column_size:array mai column ki size kitani hai
#@return void

def sort_array_elements(row_size,column_size,array):
    for pass_index in range(row_size*column_size -1):
      for row_index in range(row_size):
        for column_index in range(column_size - 1):
          if(array[row_index][column_index] > array[row_index][column_index + 1]):
            array[row_index][column_index] = array[row_index][column_index] + array[row_index][column_index + 1]
            array[row_index][column_index + 1] = array[row_index][column_index] - array[row_index][column_index + 1]
            array[row_index][column_index] = array[row_index][column_index] - array[row_index][column_index + 1]
        if( row_index < row_size - 1 and array[row_index][column_size - 1] > array[row_index + 1][0]):
            array[row_index][column_size - 1] = array[row_index][column_size - 1] + array[row_index + 1][0]
            array[row_index + 1][0] = array[row_index][column_size - 1] - array[row_index + 1][0]
            array[row_index][column_size - 1] = array[row_index][column_size - 1] - array[row_index + 1][0]

#brief this function traversal the array elements
#@param row_size:array mai row ki size kitani hai 
#@param column_size:array mai column ki size kitani hai
#@return void 

def traversal_array_elements(row_size,column_size,array):
    for row_index in range(0,row_size):
           for column_index in range(0,column_size):
                if(row_index % 2 == 0):
                  print(array[row_index][column_index], end="  ")
                else:
                 print(array[row_index][column_size -1 -column_index], end="  ")


print("enter a size of row:")
output = input()
row_size = int(output)
print("enter a array column size:")
output = input()
column_size = int(output)
array = []
for row_index in range(0,row_size):
    row = []
    for column_index in range(0,column_size):
        output = input()
        column = int(output)
        row.append(column)
    array.append(row)
       
#array = [[34, 45, 67], [78, 23, 42], [90, 46, 54]]
print_array_elements(row_size,column_size,array)
sort_array_elements(row_size,column_size,array)
print_array_elements(row_size,column_size,array)
traversal_array_elements(row_size,column_size,array)
