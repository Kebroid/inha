hex = ["FA","DCB","EF33","A01A","C99E"]

def hex2dec(num):
    return str(int(num, 16))

def oct2dec(num):
    return str(int(num, 8))

def bin2dec(num):
    return str(int(num, 2))

def dec2hex(num):
    return '{:x}'.format(num)

def dec2oct(num):
    return '{:o}'.format(num)

def dec2bin(num):
    return '{:b}'.format(num)


for x in hex:
    dec = int(hex2dec(x))
    oc = dec2oct(dec)
    bn = dec2bin(dec)
    print(x, " is ", "binary: ",bn, " octal: ", oc, " decimal: ", dec)