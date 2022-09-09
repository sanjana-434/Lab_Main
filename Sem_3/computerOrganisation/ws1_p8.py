#to perform bit-wise logical operations

def dec_bin(num,b):
    temp=int(num)
    while(temp!=0):
        b=str(temp%2)+b
        temp=temp//2
    return b
def equal_len(b,l):
    while(len(b)!=l):
        b="0"+b
    return b
def or_(b1,b2):
    b3=""
    for i in range(0,len(b1)):
        b3+=str(int(b1[i])^int(b2[i]))
    return b3
def and_(b1,b2):
    b3=""
    for i in range(0,len(b1)):
        b3+=str(int(b1[i])&int(b2[i]))
    return b3
def xor(b1,b2):
    b3=""
    for i in range(0,len(b1)):
        b3+=str(int(b1[i])|int(b2[i]))
    return b3
def not_(b1):
    b3=""
    for i in range(0,len(b1)):
        if (int(b1[i])==0):
            b3+="1"
        else:
            b3+="0"
    return b3
def right_shift(b,l):
    b=b[0:len(b1)-l]
    for i in range(0,l):
        b="0"+b
    return b
def left_shift(b,l):
    b=b[l:len(b1)]
    for i in range(0,l):
        b=b+"0"
    return b

num1=input("Enter the number 1 : ")
b1=""
b1=dec_bin(num1,b1)
num2=input("Enter the number 2 : ")
b2=""
b2=dec_bin(num2,b2)


#print(b1,b2)

#making the len equal
b2=equal_len(b2,16)
b1=equal_len(b1,16)  

l=3
b3=or_(b1,b2)
b4=and_(b1,b2)
b5=xor(b1,b2)
b6=not_(b1)
b7=left_shift(b1,l)      #bitwise left shift
b8=right_shift(b1,l)    #bitwise right shift

print("b1      = ",b1)
print("b2      = ",b2)
print("b1^b2   = ",b3)
print("b1&b2   = ",b4)
print("b1|b2   = ",b5)
print("~b1     = ",b6)
print("b1>>",l," = ",b8)
print("b1<<",l," = ",b7)

