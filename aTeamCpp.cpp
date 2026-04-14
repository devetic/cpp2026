#include<iostream>
using namespace std;
int main(){
    
    int n;
    int i=0;
    int countSolutions=0;
    int countSolutionOnlyOne=0;
    int countNoSolution=0;
    cin >> n;

    while(i < n){
        int x,y,z;
        
        cin >> x >> y >> z;

        if(x==0 && y==0 && z==0){
            countNoSolution++;
        }
        if((x==1 && y==0 && z==0) || (x==0 && y==0 && z==1) || (x==0 && y==1 && z==0)){
            countSolutionOnlyOne++;
        }
        countSolutions++;
        i++;
    }

    cout<<countSolutions-countNoSolution-countSolutionOnlyOne<<endl;

    return 0;
}