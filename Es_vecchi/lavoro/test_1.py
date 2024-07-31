with open('file_path','a') as file:   #posso usare questo per scivere un file 
    file.write('hello world !\r')        

import math as gfg   # as puo essere usato per shortare il nome delle librerie 
  
print(gfg.factorial(5))


a=4
b=0

try:
    k=a//b
    print(k)

except ZeroDivisionError:
    print("Can' t divide by zero ")

finally:

    print(" this is always executed")


#try : This keyword is used for exception handling, used to catch the errors in the code using the keyword except. Code in “try” block is checked, if there is any type of error, except block is executed.
#except : As explained above, this works together with “try” to catch exceptions.
#finally : No matter what is result of the “try” block, block termed “finally” is always executed.
#raise: We can raise an exception explicitly with the raise keyword
#assert: This function is used for debugging purposes. Usually used to check the correctness of code. If a statement is evaluated to be true, nothing happens, but when it is false, “AssertionError” is raised. One can also print a message with the error, separated by a comma.
my_variable1 = 20
my_variable2 = "GeeksForGeeks"

# check if my_variable1 and my_variable2 exists
print(my_variable1)
print(my_variable2)

  
# delete both the variables
del my_variable1
del my_variable2 # del serve per cancellare riferimenti a vairabili 
  
# check if my_variable1 and my_variable2 exists
print(my_variable1)
print(my_variable2)

def fun():
    var1 = 10

  
    def gun():
        # tell python explicitly that it
        # has to access var1 initialized
        # in fun on line 2
        # using the keyword nonlocal
        nonlocal var1
          
        var1 = var1 + 10
        print(var1)
  
    gun()
fun()

#a = 1 if 20 > 10 else 0

"""
num1 = int(input())
num2 = int(input())   si po fare il casting nell input 
num3=float(input())
input().split(separator, maxsplit)   
x, y = input("Enter two values: ").split()
print("First number is {} and second number is {}".format(a, b))   fa inserire nelle parentesi graffe a e b
x = list(map(int, input("Enter multiple values: ").split()))




import io
 
# declare a dummy file
dummy_file = io.StringIO()
 
# add message to the dummy file
print('Hello Geeks!!', file=dummy_file)
 
# get the value from dummy file
dummy_file.getvalue()


"""


def function():
    

    
    print("here")
    