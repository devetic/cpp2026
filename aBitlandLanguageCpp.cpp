#include <iostream>
#include <cstring>
using namespace std;
int main(){
    // Bitland Language
    // n - > num of statments on variable X
    // each statment contains one single operations ++ or --
    int n;
    int i=0;
    int valueX=0;
    cin>>n;
    
    while(i<n){

        char operation[4]; // two for operation increment or decrement and one for variable
        cin>>operation;
        
        if ((strcmp(operation,"X++")==0) || (strcmp(operation,"++X")==0)){
            valueX++;
        } if ((strcmp(operation,"X--")==0) || (strcmp(operation,"--X")==0)){
            valueX--;
        }
        i++;
    }

    cout<<valueX<<endl;
    
    return 0;
}