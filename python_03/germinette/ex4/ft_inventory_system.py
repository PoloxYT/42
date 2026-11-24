import sys

i = 1
j = 0
length = 0
argc = 0
inventory = dict()
stringstock = ""
stringcompare = ""
numstock = ""
striterate = ""
striterate2 = ""
for striterate in sys.argv:
    argc += 1
striterate = ""
stockargv = [":"] * argc
index = 1
iterator = 0
isalreadyin = 0
letteriterate = ''
print("=== Inventory System Analysis ===")
while i < argc:
    striterate = sys.argv[i]
    for letteriterate in striterate:
        if letteriterate == ':':
            break
    if letteriterate != ':':
        print("Error - invalid parameter", f"'{striterate}'")
    else:
        for striterate2 in stockargv:
            j = 0
            while (striterate[j] != ':' and striterate2[j] != ':'):
                stringstock += striterate2[j]
                stringcompare += striterate[j]
                j += 1
            stcmp = stringcompare
            strstck = stringstock
            stri = striterate
            stri2 = striterate2
            if strstck == stcmp and stri[j] == ":" and stri2[j] == ":":
                print("Redundant item", f"'{stringstock}'", "- discarding")
                isalreadyin = 1
            stringstock = ""
            stringcompare = ""
        if isalreadyin != 1:
            j = 0
            while (striterate[j] != ':'):
                stringstock += striterate[j]
                j += 1
            j += 1
            while j < len(striterate):
                numstock += striterate[j]
                j += 1
            try:
                inventory[stringstock] = int(numstock)
                stockargv[index] = striterate
                index += 1
            except ValueError as e:
                print("Quantity error for", f"'{stringstock}':", e)
            j = 0
            numstock = ""
            stringstock = ""
    stringstock = ""
    stringcompare = ""
    isalreadyin = 0
    i += 1
    j = 0
print("Got inventory:", inventory)
tabstockkeys = list(inventory.keys())
tabstockvalues = list(inventory.values())
print("Item list", tabstockkeys)
print("Total quantity of the", index - 1, "items:", sum(inventory.values()))
i = 0
minimum = 0
maximum = 0
while i < index - 1:
    purcent = round((tabstockvalues[i] / sum(tabstockvalues)) * 100, 1)
    print("Item", tabstockkeys[i], "represents", f"{purcent}%")
    if tabstockvalues[i] > tabstockvalues[maximum]:
        maximum = i
    if tabstockvalues[i] < tabstockvalues[minimum]:
        minimum = i
    i += 1
maxi = tabstockvalues[maximum]
mini = tabstockvalues[minimum]
print("Item most abundant:", tabstockkeys[maximum], "with quantity", maxi)
print("Item least abundant:", tabstockkeys[minimum], "with quantity", mini)
inventory["magic_item"] = 1
print("Updated inventory:", inventory)
