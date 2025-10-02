from typing import List

arr : List[int] = [
    [1,2,3,5],
    [4,5,6,9],
    [7,8,9,11]
]
# We are trying things on int types
def search(array : list, k : int) -> bool:
    for i in range(len(array)):
        for j in range(len(array[0])):
            if arr[i][j] == k:
                return True
    
    return False
    
# They assed as Normal as 1D arrays
print(search(arr,6))
