import math as m

def dec_bin(b1,b2,c=0):
    carry=c
    b=""
    for i in range(-1,-len(b1)-1,-1):
       temp=carry+int(b1[i])+int(b2[i])
       if (temp==0):
           b="0"+b
           carry=0
       elif (temp==1):
           b="1"+b
           carry=0
       elif(temp==2):
           b="0"+b
           carry=1
       elif(temp==3):
           b="1"+b
           carry=1
    if (carry==1):
        b="1"+b
    return b,carry
"""
def bin_dec(num):
    dec=0
    for i in range(len(num)-1,-1,-1):
        dec+=((m.pow(2,len(num)-i-1))*int(num[i]))
    return dec
"""
bcd={"0":"0000","1":"0001","2":"0010","3":"0011","4":"0100","5":"0101","6":"0110","7":"0111","8":"1000","9":"1001"}
invalid=["1010","1011","1100","1101","1110","1111","10000","10001","10010","10011"]

ans=[]

num1=input("Enter number 1 : ")
num2=input("Enter number 2 : ")
bcd1=""
bcd2=""
b1=[]
b2=[]

for i in num1:
    bcd1+=bcd[i]
    b1.append(bcd[i])

for i in num2:
    bcd2+=bcd[i]
    b2.append(bcd[i])
    
while(len(bcd1)!=len(bcd2)):
    if (len(bcd1)<len(bcd2)):
        bcd1="0000"+bcd1
        b1=["0000"]+b1
    else:
        bcd2="0000"+bcd2
        b2=["0000"]+b2
"""
print(bcd1)
print(bcd2)
print(b1)
print(b2)
"""
c=0
for i in range(-1,-len(b1)-1,-1):
    temp,carry=dec_bin(b1[i],b2[i],c)
    if (temp in invalid):
        if (len(temp)==4):
            temp,carry=dec_bin(temp,"0110")
            if (len(temp)==4):
                ans=[temp]+ans
                c=0
            else:
                ans=[temp[1:5]]+ans
                c=1
        else:
            temp,carry=dec_bin(temp,"00110")
            if (len(temp)==4):
                ans=[temp]+ans
                c=0
            else:
                ans=[temp[1:5]]+ans
                c=1
    else:
        ans=[temp]+ans
        c=0


if (c==1):
    ans=["0001"]+ans
ans="".join(ans)
print("Answer in binary : ",ans)

#print("Answer in decimal : ",bin_dec(ans))

