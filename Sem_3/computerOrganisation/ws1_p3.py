#valid for only decimal,binary,octal

def rs_comp(n,r):
    r_comp=""
    for i in range(0,len(n)):
        r_comp+=str(r-1-int(n[i]))
    return r_comp

def r1s_comp(n,r):
    flag=0
    r1_comp=""
    for i in range(len(n)-1,-1,-1):
        if (int(n[i])!=r-1):
            r1_comp=str(int(n[i])+1)+r1_comp
            r1_comp=n[0:i]+r1_comp
            flag=1
            break
        else:
            r1_comp="0"+r1_comp;
    if (flag==0):
        r1_comp="1"+r1_comp;
    return r1_comp

num=input("Enter the num (in its form) : ")
while(1):
    r=int(input("Enter the radix : "))
    if (r==2 or r==10 or r==8 or r==16):
        break;
    else:
        print("Invalid input! Enter again")

#r_comp
r_comp=rs_comp(num,r)
print(r_comp)

#r1_comp
r1_comp=r1s_comp(r_comp,r)
print(r1_comp)

