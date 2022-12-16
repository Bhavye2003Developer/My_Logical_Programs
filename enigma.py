import matplotlib.pyplot as plt
import random
# letter_input = input() #Letter
message = input('Enter message with 3 seeds space seperated : ').split(" ")
m = []
for i in message[0]:
    m.append(i)
message1 = m
# print(message)

# alphabets = 'abcdefghijklmnopqrstuvwxyz'
# dict_alpha = {}
# for i in range(len(alphabets)):
#     dict_alpha[i+1] = alphabets[i]
# print(dict_alpha)

keyboard_input = {1: 'a', 2: 'b', 3: 'c', 4: 'd', 5: 'e', 6: 'f', 7: 'g', 8: 'h', 9: 'i', 10: 'j', 11: 'k', 12: 'l', 13: 'm', 14: 'n', 15: 'o', 16: 'p', 17: 'q', 18: 'r', 19: 's', 20: 't', 21: 'u', 22: 'v', 23: 'w', 24: 'x', 25: 'y', 26: 'z'}

letter_dict = []
for i in message1:
    letter_to_number = ord(i) - 97 + 1
    letter_dict.append(letter_to_number)
# print(letter_dict)

def rotor1(letter_to_number,seed=1) -> int:
    shuffled_func = lambda x: (x + x**(seed)*ord('z'))%26
    return shuffled_func(letter_to_number)

def rotor2(rotor1_output,seed=1) -> int:
    shuffled_func = lambda x: (x + x**(seed)*ord('~') + seed*199183)%26
    return shuffled_func(rotor1_output)

def rotor3(rotor2_output,seed=1) -> int:
    shuffled_func = lambda x: (x + x**(seed)*ord('@') + seed*928**27 + x**seed * 23* ord('\\'))%26
    return shuffled_func(rotor2_output)

def reflector(rotor3_output) -> int:
    paired_func = lambda x: ((x*2334 // x**(x)) % 26 + x*27) % 26
    rotors_to_reflector_output = lambda x: paired_func(rotor3(rotor2(rotor1(x))))
    reflector_to_output = rotor1(rotor2(rotor3(rotors_to_reflector_output(rotor3_output))))
    return reflector_to_output

# print(x(23))
# print(keyboard_input_output[x(letter_to_number)])

keyboard_output = [list(keyboard_input.keys()),list(keyboard_input.values())]
# print(keyboard_output,end = "\n\n")
def plugboard(what_swap="", with_which_swap="") -> None:
    if ((what_swap in keyboard_output[1]) and (with_which_swap in keyboard_output[1])):
        x,y = keyboard_output[1].index(what_swap),keyboard_output[1].index(with_which_swap)
        
        keyboard_output[1][x],keyboard_output[1][y] = keyboard_output[1][y],keyboard_output[1][x]
        keyboard_output[0][x],keyboard_output[0][y] = keyboard_output[0][y],keyboard_output[0][x]
    else:
        return

#DOING PLUGBOARD OPERATIONS

keyboard_output_dict = {}
for i in range(len(keyboard_output[0])):
    keyboard_output_dict[keyboard_output[0][i]] = keyboard_output[1][i]

keyboard_output = keyboard_output_dict
# print(keyboard_output)

#SEED settings
seed = [1,1,1]

def process(letter_to_number,x=1,y=1,z=1):
    seed[0] = x;seed[1]=y;seed[2] = z
    encrypted_codes = []
    for i in letter_to_number:
        encryption_rotor = lambda x: reflector(rotor3(rotor2(rotor1(x,seed[0]),seed[1]),seed[2]))
        plugboard('w','j')
        plugboard('q','t')
        plugboard('o','e')
        encrypt_num = encryption_rotor(i)
        plugboard('e','r')
        encrypted_codes.append(encrypt_num)
    # print(keyboard_output[encrypt_num])
    encrypted_message = ""
    for i in encrypted_codes:
        encrypted_message+=keyboard_output[i]
    print(f"Encrypted message : {encrypted_message}")
    # print(encrypted_codes)

process(letter_to_number=letter_dict,x=int(message[1]),y=int(message[2]),z=int(message[3]))