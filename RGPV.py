mark=[]
def add():              #Function to add mark
    marks=int(input("Enter Student mark:"))
    mark.append(marks)
    print("Mark added Successfully!!")

def show():            #Function to show all result
    if len(mark)==0:
        print("No data found")
        return
    print("\nStudent marks:")
    for i,m in enumerate(mark,start=1):
        print(f"students{i}:{m}")

def ave():             #Function to calculate average mark
     if len(mark)==0:
        print("No data found")
        return
     av=sum(mark)/len(mark)
     print(f"Average mark={av:.2f}")


def high():           #Function to find highest Number
     if len(mark)==0:
        print("No data found")
        return
     top=max(mark)
     print(f"Highest mark={top}")

while True:
    print("\n.....RGPV Result Analyzer.....")
    print("1:Add mark\n2:Show mark\n3:Average mark\n4:Highest mark\n5:Exit")
    choice= input("Enter your choice:")
    if(choice=="1"):
        add()
    elif(choice=="2"):
        show()
    elif(choice=="3"):
        ave()
    elif(choice=="4"):
        high()
    elif(choice=="5"):
        print("Exiting.....")
        break
    else:
        print("Invalid Input")