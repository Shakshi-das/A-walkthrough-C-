//program to sort letters in a string
#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    int j;
    int t;
    string input;
    cout<<"Enter a Word : ";
    cin>>input;
    int len = input.length();
    for (i = 0; i < len; i++){
        for (j = 0; j < len - 1; j++){
            if (input[j] > input[j + 1]){
                t = input[j];
                input[j] = input[j + 1];
                input[j + 1] = t;
            }
        }
    }
    cout<<input;
}
