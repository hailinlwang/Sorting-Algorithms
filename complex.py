class complex:
   def __init__(self,real,imag):
      #__init__ is special and must be spelled this way
      #it allows us to say "x=complex(0,1)" to create a complex number
      self.re=real
      self.im=imag
      # note: no return value (rare exception to our rule!)

   def setRe(self,X):
      self.re=x
      return True

   def setIm(self,x):
      self.im=x
      return True
   
   def setDesc(self,x):
      self.desc=x
      return True

   def getRe(self):
      return self.re

   def getIm(self):
      return self.im

   def getDesc(self):
      return self.desc

   def dispStr(self):
      return str(self.re)+"i "+str(self.im)

   def __add__(self,other):
      # __add__ is special syntax that lets us use the + operator
      # for our class; this is called "OVERLOADING" the + operator
      return complex(self.re+other.re,self.im+other.im)

   def __mul__(self,other):
      return complex(self.re*other.re,self.im*other.im)

def main():
   a = complex(1,1)
   b = complex(2,2,)
   print((a+b).dispStr())
   a.setDesc("this is a complex number representing something important")
   b.setDesc("this is irrelevant")
   print(b.getDesc())


   print((a*b).dispStr())

   return True

main()
