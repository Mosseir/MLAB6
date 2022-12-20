#include<iostream>
using namespace std;

int main(){
    int x , i = 0 ,z = 0;
        cout << "Enter an integer: ";
        cin >> x;
        while(x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x!=0)
        {
            if(x%2==0)
            {
            i++;
            }
            else
            {
            z++;
            }
        }
        }
        cout << "#Even numbers = " << i << endl ;
        cout << "#Odd numbers = " << z << endl ;
    return 0;
    }