def dec__(num,r):
    ans=""
    if (r!=16):
        while(num!=0):
            ans=str(num%r)+ans
            num=num//r
    else:
        while(num!=0):
            temp=num%r
            if (temp<=9):
                ans=str(temp)+ans
                num=num//r
            else:
                ans=chr(55+temp)+ans
                num=num//r
    print("Answer : ",ans)

ch=0
while(1):
    num=int(input("Enter decimal number  : "))
    print("Convert decimal to ? Enter 0 to exit")
    print("1) Octal")
    print("2) Hexadecimal")
    print("3) Binary")
    while(1):
        ch=int(input("Enter yout choice : "))
        if ((ch==1) or (ch==2) or (ch==3) or (ch==0)):
            break
        else:
            print("Invalid input! Enter again")
    if (ch==0):
        break
    elif (ch==1):
        dec__(num,8)
    elif (ch==2):
        dec__(num,16)
    elif (ch==3):
        dec__(num,2)


