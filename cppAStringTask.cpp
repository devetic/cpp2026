#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){

    char word[200];
    char finalWord[400];
    int i=0,j=0;
    cin>>word;

    while(word[i] != '\0'){
        char c = tolower(word[i]); // transforming character from given word in postion i to lowercase
        if(!(c == 'a' || c=='o' ||c=='y' || c == 'e' || c=='u' || c=='i')){ // everything what is not vawels (a,e,i,o,u,y) copy, before copy add .
            finalWord[j++] = '.';
            finalWord[j++] = c;
        }  
        i++; // just increment for one
    } 

    finalWord[j]='\0'; // let's be sure that finalword will have edn of string
    cout<<finalWord<<endl; // printing the final string

    return 0;
}