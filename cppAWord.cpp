#include<iostream>
#include<cstring>

using namespace std;

int main(){

    char word[100];
    int wordSize=0;
    int lowers=0;
    int uppers=0;
    cin>>word;
    wordSize=strlen(word);
    int i=0;
    while(i<wordSize){
        if(islower(word[i])){
            lowers++;
        }
        else{
            uppers++;
        }
        i++;
    }
    cout<<lowers<<" "<<uppers<<endl;
    if(lowers > uppers){
        i=0;
        while(i<wordSize){
            word[i]=tolower(word[i]);
            i++;
        }
    }
    else{
        i=0;
        while(i<wordSize){
            word[i]=toupper(word[i]);
            i++;
        }
    }
    cout<<word;

    return 0;
}

