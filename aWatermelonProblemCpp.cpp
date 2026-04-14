#include<iostream>

using namespace std;

int main(){
    /// Watermelon problem
    /// Should check if weight of watermelon can be evently devided

    int w;
    cin>>w;
    
    //cout<<w<<endl;

    //cout << w / 2 << endl;

    if(w > 2) {
        if ( w % 2 == 0 )
            cout<<"YES";
        else 
            cout<<"NO";
    }
    else{
        cout<<"NO";
    }

    return 0;
}