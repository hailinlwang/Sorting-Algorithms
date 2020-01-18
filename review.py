L = [[1,2],3]
M = L[:]


print(L)
print(M)

M[0][1] = 5
M[1] = 5

print(L)
print(M)
