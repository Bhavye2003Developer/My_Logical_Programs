import numpy as np
arr = [[0,0,0],
       [1,1,0],
       [1,0,0]]

print("PRINTING ARRAY...")
print(arr,end="\n\n")


def is_tic_tac_won(arr):
       #CHECKING FOR ROWS
       num_rows = len(arr)
       row_checker = []
       for i in range(num_rows):
              row_checker.append(1)
       row_checker = np.array(row_checker)

       for i in range(num_rows):
              np_arr_row = np.array(arr[i])
              if (row_checker.dot(np_arr_row) == num_rows):
                     return 1
       
       #CHECKING FOR COLUMNS
       for i in range(len(arr[0])):
              col_checker = []
              for j in range(num_rows):
                     col_checker.append(arr[j][i])
              col_checker = np.array(col_checker)
              if (col_checker.dot(row_checker) == num_rows):
                     return 1
       
       #FORWARD DIAGONAL ELEMENTS
       diagonal_sum = 0
       for i in range(num_rows):
              diagonal_sum+=arr[i][i]
       if (diagonal_sum==num_rows):
              return 1

       #BACKWARD DIAGONAL ELEMENTS
       row = 0
       col = num_rows - 1
       diagonal_sum = 0
       while (row<num_rows):
              diagonal_sum+=arr[row][col-row]
              row+=1
       if (diagonal_sum==num_rows):
              return 1

       return 0
print(is_tic_tac_won(arr)) #FOR 1 CROSS

for i in range(len(arr)): #FOR 0 ZERO
       for j in range(len(arr[0])):
              arr[i][j] = arr[i][j] ^ 1
              
# print(is_tic_tac_won(arr))