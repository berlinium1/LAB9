from functions import creating_strings, comparing_words, final_output
row1=input("Input string1: ")
row2=input("Input string2: ")
#тут лежат сеператоры в списке
sep = [' ', ',', ', ', ';', ':', '-', '(', ')', '[', ']', '{', '}']
############
string1, string2, fn_string = [], [], []
string1 = creating_strings(row1, string1, sep)
string2 = creating_strings(row2, string2, sep)
string3 = comparing_words(string1, string2)
final_output(string3)

#for tests
#1: zero one two three four five six seven eight nine ten ten eleven кпі
#2: zero two six six six five 098 кпі


#1 help:kpi;python[jointed]{c++};;;hghg
#2 help, hghg