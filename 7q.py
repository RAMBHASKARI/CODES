#Dictionaries are used to store data values in key : value pairs.
#A dictionary is a collection which is ordered*,changeable and do not allow duplicates

dict1 = {'StdNo':'6260','StuName': 'SaiRam', 'StuAge': '18', 'StuCity': 'warangal'}
print("\n Dictionary is :",dict1)
#Accessing specific values 
print("\n Student Name is :",dict1['StuName'])
print("\n Student City is :",dict1['StuCity'])
#Display all Keys
print("\n All Keys in Dictionary ")
for x in dict1:
    print(x)
#Display all values
print("\n All Values in Dictionary ")
for x in dict1:
    print(dict1[x])
#Adding items
dict1["Phno"]=8712375604
#Updated dictoinary
print("\n Uadated Dictionary is :",dict1)
#Change values
dict1["StuName"]="Ram "
#Updated dictoinary
print("\n Uadated Dictionary is :",dict1)
#Removing Items
dict1.pop("StuAge");
#Updated dictoinary
print("\n Uadated Dictionary is :",dict1)
#Length of Dictionary
print("Length of Dictionary is :",len(dict1))
#Copy a Dictionary
dict2=dict1.copy()
#New dictoinary
print("\n New Dictionary is :",dict2)
#empties the dictionary
dict1.clear()
print("\n Uadated Dictionary is :",dict1)