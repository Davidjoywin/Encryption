import string

letters = string.printable
len_str = len(letters)
def get_shift(index, shift):
    if index + shift < len_str:
        return letters[index + shift]

    else:

        # if the len of index + shift is longer
        # len of letters, then subtract the 
        # of original letters length the start the
        # from beginning of the letters
       
        tmp = (index + shift) - len_str
        while tmp >= len_str:
            tmp -= len_str
        return letters[tmp]

def get_reverse(index, reverse):

    return letters[index - reverse]
    

def encrypt(val, shift):
    new_val = val
    for i in val:
        index = letters.index(i)
        new_val = new_val.replace(i, get_shift(index, shift))

    return new_val

def decrypt(val, reverse):
    new_val = val
    for i in val:
        index = letters.index(i)
        new_val = new_val.replace(i, get_reverse(index, reverse))

    return new_val


