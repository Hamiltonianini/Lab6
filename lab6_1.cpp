#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int N;
   
    int EV = 0;
    int OD = 0;

    do {
        cout << "Enter an integer: ";
        cin >> N;
        
        if(N!=0 && N%2==0){
           EV = EV + 1;
        }else if(N%2==1){  
            OD = OD + 1;
        }
    }
    while(N!=0);

    cout << "#Even numbers = " << EV << endl;
    cout << "#Odd numbers = " << OD;
    
    return 0;
}