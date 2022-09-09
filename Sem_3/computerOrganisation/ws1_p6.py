m1=float(input("Enter the mantisa of num 1 : "))
e1=int(input("Enter the exponent of num 1  : "))
m2=float(input("Enter the mantisa of num 2 : "))
e2=int(input("Enter the exponent of num 2  : "))

if (e1==e2):
    print("Sum : ",m1+m2," * e^",e1);
else: 
    if (e1>e2):
        diff=abs(e2-e1);
        e1=e1-diff
        m1=m1*pow(10,diff);
    else:
        diff=abs(e1-e2);
        e2=e2-diff
        m2=m2*pow(10,diff);
    print("Sum : ",m1+m2," * e^",e1);


