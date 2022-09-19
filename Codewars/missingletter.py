#this is the 1 line solution but it returns an error when there's no missing letter
def find_missing_letter(c):
    return next(chr(ord(c[i])+1) for i in range(len(c)-1) if ord(c[i])+1 != ord(c[i+1]))

num = int(input("Enter number of letters: "))
text = []

for i in range(num):
    text.append(input())
print(find_missing_letter(text))