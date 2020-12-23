def creating_strings(list1, list2, sep):
    word=""
    for i in list1:
        flag = 0
        for j in sep:
            if i==j:
                 flag=1
        if flag==0:
            word+=i
        else:
            list2.append(word)
            word=""
    list2.append(word)
    return list2
def comparing_words(list1, list2):
    f=0; index_new=0; list3=[]
    for word1 in list1:
        for word2 in list2:
            if word1==word2:
                f=1
        if f==0:
            list3.append(word1)
            index_new+=1
        f=0
    return list3

def final_output(list):
    for word in list:
        print(word, end=" ")