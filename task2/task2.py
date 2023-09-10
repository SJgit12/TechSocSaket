import pickle
def display():
    
    f=open("bank.dat","rb")
    try:
        while True:
            data=pickle.load(f)
            print("----------------------------------------------------------------")
            print("Name of account holder: ",data['name'])
            print("Account number: ",data['accno'])
            print("Balance in Account: ",data['amt'])
    except EOFError:
        pass
    f.close()

def newacc():
    f=open("bank.dat","ab")
    name=input("enter the name of account holder: ")
    accno=int(input("enter the account number: "))
    pin=int(input("enter a 4 digit pin: "))
    amount=int(input("enter starting amount: "))
    record={'accno':accno,'name':name,'amt':amount,'PIN':pin}
    pickle.dump(record,f)
    f.close()

              
def withdraw():
    global acc
    acc=int(input("enter account number of account "))
    if len(str(acc))!=11:
        print("error")
    else:
        global amt    
        f=open("bank.dat","rb")
        try:
            while True:
                data=pickle.load(f)
                if data["accno"]==acc:
                    print("----------------------------------------------------------------")
                    print("Name of account holder: ",data['name'])
                    print("Account number: ",data['accno'])
                    print("Balance in Account: ",data['amt'])
                    datafinal=data
        except EOFError:
            pass
        f.close()
        pin=int(input("enter your PIN "))
        if datafinal['PIN']==pin:  
            amt=int(input("enter amount for withdrawl "))
            if amt>datafinal['amt']:
                print("error")
            else:
                global amount
                amount=datafinal['amt']-amt
                print("----------------------------------------------------------------")
                print("Name of account holder: ",datafinal['name'])
                print("Account number: ",datafinal['accno'])
                print("Balance in Account: ",amount)
            
                f=open("bank.dat","rb+")
                try:
                    while True:
                        pos=f.tell()
                        a=pickle.load(f)
 
                        if a["accno"]==acc:
                            a['amt']=amount
                            f.seek(pos)
                            pickle.dump(a,f)
                except EOFError:
                    pass
def deposit():
    global acc
    acc=int(input("enter account number of account "))
    if len(str(acc))!=11:
        print("error")
    else:
        global amt    
        f=open("bank.dat","rb")
        try:
            while True:
                data=pickle.load(f)
                if data["accno"]==acc:
                    print("----------------------------------------------------------------")
                    print("Name of account holder: ",data['name'])
                    print("Account number: ",data['accno'])
                    print("Balance in Account: ",data['amt'])
                    datafinal=data
        except EOFError:
            pass
        f.close()
        pin=int(input("enter your PIN "))
        if datafinal['PIN']==pin:  
            amt=int(input("enter amount for deposit "))
            
            global amount
            amount=datafinal['amt']+amt
            print("----------------------------------------------------------------")
            print("Name of account holder: ",datafinal['name'])
            print("Account number: ",datafinal['accno'])
            print("Balance in Account: ",amount)
            
            f=open("bank.dat","rb+")
            try:
                while True:
                    pos=f.tell()
                    a=pickle.load(f)
 
                    if a["accno"]==acc:
                        a['amt']=amount
                        f.seek(pos)
                        pickle.dump(a,f)
            except EOFError:
                pass
    
ans="Y"
while ans=="Y":
    
    print("----------------------------------------------------------------")
    print("         welcome to banking management system")
    print("----------------------------------------------------------------")
    print()
    print("1. Display all accounts")
    print("2. create a new account")
    print("3. make a withdrawal")
    print("4. make a deposit")
    print("5. exit")
    fnc=int(input("enter the preffered option number "))
    if fnc==1:
        display()
    if fnc==2:
        newacc()
    if fnc==3:
        withdraw()
    if fnc==4:
        deposit()
    if fnc==5:
        ans="n"
