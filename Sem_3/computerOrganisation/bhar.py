def decimaltobinary(n):
    """"string=""
    if(n>0):
        string=str(n%2)
        decimaltobinary(n//2)
        #print(string)
        return string
    """
    b=""
    while(n!=0):
        b=str(n%2)+b
        n=n//2
    return b
    
   
def binaryadd(r,b):
    add=""
    carry="0"
    for i in r:
        for j in b:
            if(i=="0" and j=="0"):
                add="0"
                carry="0"
            elif(i=="0" and j=="1"):
                add="1"
                carry="0"
            elif(i=="1" and j=="0"):
                add="1"
                carry="0"
            elif(i=="1" and j=="1"):
                add="0"
                carry="1"
    for i in carry:
        if(i=="1"):
                    binaryadd(carry,add)
        else:
            None
    print(add)
    print(carry)
                   
               
   
def compliment(x):
    new=""
    for i in x:
        if i=="1":
            new=new+"0"
               
        else:
            new=new+"1"
    #print(new)
    return new
       
       
inp1=int(input("Enter First  Number"))
inp2=int(input("Enter Second Number"))
if(inp1<0):
    t=decimaltobinary(inp2)
    #print(t)
   
    y=str(decimaltobinary(-inp1))
    a=compliment(y)
    print(a)
    #f=compliment(a)
    #print(f)
    #binaryadd(x,f)
   
   
elif(inp2<0):
    y=decimaltobinary(inp1)
    q=decimaltobinary(-inp2)
    #a=compliment(y)
    #print(a)
    f=compliment(q)
    print(f)
    binaryadd(y,q)