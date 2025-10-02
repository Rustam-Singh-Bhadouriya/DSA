"""

[x,y,z] this is a 1D array 
but nxm size array called 2D array which contains n rows and m colloms

like 3 rows and 3 colloms then it will be like this

[
    [x,y,z],
    [x,y,z],
    [x,y,z]
]
thats it!
"""

array2D = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
]

# this is a 3x3 array (2D)

# printing it

for i in range(3):
    for j in range(3):
        print(array2D[i][j], end=" ")
    print(" ")
# Best Methord For print Each value as metrix

