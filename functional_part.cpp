#include <iostream>
#include <string>
using namespace std;
int N=1000;
int creating_words(char *str, string words_from1[]){
    char *pch = strtok(str, " ,.-");
    int i=0;
    while (pch!=NULL){
        words_from1[i]=pch;
        i++;
        pch = strtok(NULL, " ,.-");
    }
    //for (int j=0; j<i; j++)
       // cout<<"["<<j<<"] "<<words_from1[j]<<endl;
    return i;
}
void final_output(string array[], int *index){
    cout<<"\nNew string is here: ";
    for (int i=0; i<*index; i++)
    cout<<array[i]<<" ";
    cout<<endl;
}
int comparing_words(string words_from1[], string words_from2[], int *pt1, int *pt2, string arr3[]){
    int f=0, index_new=0;
    for(int i=0; i<*pt1; i++){
        for(int j=0; j<*pt2; j++){
            if(words_from1[i]==words_from2[j]){
                f=1;
            }
        }
        if (f==0){
            arr3[index_new]=words_from1[i];
            index_new++;
        }
        f=0;
    }
    N=index_new;
    return index_new;
}
