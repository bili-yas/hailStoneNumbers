#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
using namespace std;

int main(){
    int num;
    int newnum;
    int temp;

    cout << "Pick any number  greater than 0:"<<endl;
    cin >> num;

    while (num >= 1){
        if (num%2 == 0){
            num = num / 2;
        }
        else if(num % 2 != 0){
            num = num * 3 + 1;
        }
        cout << num<<endl;
        Sleep(1000);
    }

}
