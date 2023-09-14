import string


letters = string.ascii_letters + ' '
len_str = len(letters)

def get_shift(index, shift):
    if (index + shift) <= len_str:
        return letters[index + shift]

    else:

        # if the len of index + shift is longer
        # len of letters, then subtract the 
        # of original letters length the start the
        # from beginning of the letters
       
        return letters[index - shift]

def get_reverse(index, reverse):
    if (index + reverse) <= len_str:
        return letters[index - reverse]
    else:
        return letters[index + reverse]
    

def encrypt(val, shift):
    for i in val:
        index = letters.index(i)
        val_list = list(val)
        # val = val.replace(i, get_shift(index, shift))
        val_list[val.index(i)] = get_shift(index, shift)
        val = ''.join(val_list)
    return val

def decrypt(val, reverse):
    for i in val:
        index = letters.index(i)
        # val = val.replace(i, get_reverse(index, reverse))
        val_list = list(val)
        val_list[val.index(i)] = get_reverse(index, reverse)
        val = ''.join(val_list)

    return val


