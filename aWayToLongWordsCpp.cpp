#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // int n;
    char word[100];
    int n;
    int i=0;
    int wordSize;
    int countBetween;
    cin>>n;
    while(i<n){
        cin>>word;
        wordSize = strlen(word);
        if(wordSize>10){
            countBetween = wordSize - 2;
            cout<<word[0]<<countBetween<<word[wordSize-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
        i++;
    }
    
    return 0;
}

