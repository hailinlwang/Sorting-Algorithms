class fifo:
   def __init__(self):
      self.store = []

   def add(self,x):
      self.store += [x]
      return True

   def rem(self):
      if len(self.store)==0
         return False
      elif len(self.store)==1:
         r = self.store[0]
         self.store =[] 
         return r
      else:
         r = self.store[0]
         self.store = self.store[1:len(self.store)]
         return r

class lifo:
   def __init__(self):
      self.store = [0]

   def push(self,x):
      self.store += [x]
      return True


   def pop(self):
      r = self.store[len(self.store)-1]
      self.store = self.store[0:len(self.store)-2]
      return r
