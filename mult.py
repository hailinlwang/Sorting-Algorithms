####Multiply with addition####

def mult(a,b):
   sum = 0
   cnt = 0
   while cnt < b :
      sum = sum + a
      cnt = cnt + 1
   print(sum)
   return sum

mult(3,2)
