#Write a code to demonstrate subtraction between signed numbers using r’s complement representation.
#only for 16 it num  #addition(subtraction)
#for all cases its working

import math as m
bit=16
def dec_bin(num,b):
    temp=int(num)
    while(temp!=0):
        b=str(temp%2)+b
        temp=temp//2
    return b
def bin_dec(b):
    num=0
    if (b[0]=="0"):
        for i in range(0,bit):
            num+=m.pow(2,i)*int(b[bit-1-i])
    else:
        b=comp_2(b)
        for i in range(0,bit):
            num+=m.pow(2,i)*int(b[bit-1-i])
        num=-num
    return num
            
def equal_len(b,l):
    while(len(b)!=l):
        b="0"+b
    return b
def sum(b1,b2):
    b3=""
    carry=0
    for i in range(bit-1,-1,-1):
        #print(int(b1[i])+int(b2[i]))
        if ((int(b1[i])+int(b2[i])+carry)==0):
            b3="0"+b3
            carry=0
        elif ((int(b1[i])+int(b2[i])+carry)==1):
            b3="1"+b3
            carry=0
        elif ((int(b1[i])+int(b2[i])+carry)==2):
            b3="0"+b3
            carry=1
        elif ((int(b1[i])+int(b2[i])+carry)==3):
            b3="1"+b3
            carry=1
    return b3

def comp_2(b1):
    b=""
    for i in range(0,bit):
        if (b1[i]=="0"):
            b=b+"1"
        else:
            b=b+"0"
    b=sum(b,"0000000000000001")
    return b

num1=input("Enter num 1 : ")
num2=input("Enter num 2 : ")
b1=""
b2=""

if (int(num1)>=0):
    b1=dec_bin(num1,b1)
    b1=equal_len(b1,bit)
else:
    b1=dec_bin(num1[1:],b1)
    b1=equal_len(b1,bit)
    b1=comp_2(b1)

if (int(num2)<0):   #change for subtraction
    b2=dec_bin(num2[1:],b2)
    b2=equal_len(b2,bit)
else:
    b2=dec_bin(num2,b2)
    b2=equal_len(b2,bit)
    b2=comp_2(b2)    

#Case 1: Addition of the positive number with a negative number when the positive number has a greater magnitude.
#if (int(num1)>=0 and int(num2)>=0):

#Case 2: Adding of the positive value with a negative value when the negative number has a higher magnitude.
"""print((int(num1)>=0))
print((int(num2)<0))
if ((int(num1)>=0) and (int(num2)<0)):
    b3=case1(b1,b2)
    print(b3)
"""
b3=sum(b1,b2)
print("num1      : ",b1)
print("num2      : ",b2)
print("num1+num2 : ",b3)  #sum
print("Sum : " ,bin_dec(b3))





