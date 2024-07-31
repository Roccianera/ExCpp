#num=input("Enter number :") #in questo modo posso prendere input 
#print("type of name", type(num))#  stampa anche il tipo -> typeof name <class'str>
import keyword # cosi si importa una libreria 

#print("The list of keywords is : ")
#print(keyword.__all__)
#print(None == 0)  printa false per entrambe le istruzioni
#print(None == [])

if 's' in 'geeksforgeeks':
    print("s is part of geeksforgeeks")   # Un esempio su un struttura di selezione 
else:
    print("s is not part of geeksforgeeks")


#for i in 'geeksforgeeks':    # for che itera range-volte 
 #   print(i, end=" ")   #  end=" "  aggiunge carattere alla fine 

#print("\r")  #serve per andare a capo 
#print(' ' is ' ')  # si puo usare anche in questa maniera  -> restituisce True 

for i in range(10):    # Un altro esempio di for     parta da 0  fino ad arrivare a range -1
  
    print(i, end = " ")
      
    # break the loop as soon it sees 6
    if i == 6:
        break


#while i <10:

i = 20
if (i == 10):
    print ("i is 10")
elif (i == 20):
    print ("i is 20")
else:
    print ("i is not present")


def fun():    # definizione di una funzione 
    print("Inside Function")
    return 5; #  posso fare ritoranre questo 
      
#fun()


#yield : This keyword is used like return statement but is used to return a generator.

def fun():
    S = 0
      
    for i in range(10):   #tipo quando voglio fare ritornare piu cose 
        S += i
        yield S
  
for i in fun():
    print(i)


class Dog:
      
    # A simple class
    # attribute
    attr1 = "mammal"   #attributi della classe 

    attr2 = "dog"
  
    # A sample method
    def fun(self):      #definzione di una metodo  
        print("I'm a", self.attr1)   #chiama a se il proprio attiributo 
        print("I'm a", self.attr2)
  
# Driver code
# Object instantiation
Rodger = Dog()                   # dichiarazioen di un oggetto di classe Dog, un po diverso da c++
  
# Accessing class attributes
# and method through objects
print(Rodger.attr1)                 # posso accedere agli attriburi della classe anche al di fuori della classe 
Rodger.fun()                        # uso di una funzione 

with open('file_path', 'w') as file:  # 
    file.write('hello world !')
    
    
    """Accessing characters in Python
In Python, individual characters of a String can be accessed by using the method of Indexing.
Indexing allows negative address references to access characters from the back of the String, e.g. -1 refers to the last character, 
-2 refers to the second last character, and so on. 

While accessing an index out of the range will cause an IndexError. Only Integers are allowed to be passed as an index, 
float or other types that will cause a TypeError. 
    """