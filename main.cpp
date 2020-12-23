//
//  main.cpp
//  LAB8
//
//  Created by Берлинский Ярослав Владленович on 11.11.2020.
#include <iostream>
#include <string>
#include "functional_part.cpp"
using namespace std;

int main(){
    string words_from1[N];
    string words_from2[N];
    string final_str[N];
    char str1[N];
    char str2[N];
    cout<<"Input the first string: ";
    gets(str1);
    cout<<"Input the second string: ";
    gets(str2);
    int i=0, j=0, index=0;
    i = creating_words(str1, words_from1);
    j = creating_words(str2, words_from2);
    index = comparing_words(words_from1, words_from2, &i, &j, final_str);
    final_output(final_str, &index);
}

//1: zero one two three four five six seven eight nine ten ten eleven кпі
//2: zero two six six six-five 098 кпі

//1: живи люби кпі
//2: люби живи 1234 ащмушим уоуршуцпуопршгупгу
