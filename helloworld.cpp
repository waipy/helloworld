#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool accept2(){
    cout << "Do you want to proceed (y or n) ?\n";
    char answer = 0;
    cin >> answer;
    switch(answer){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no. \n";
            return false;
    }
}

void printLit(){
    char s[10];
    for(int i=0;i<256;i++){
        cout <<  "value " << i << "   is " << char(i) << '\n';

    }
    cout << "hello world!";
}

// int main()
// {
//     vector<string> msg {"liweisheng", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
//     for (const string& word : msg)
//     {
//         // cout << word << " ";
//     }
//     // accept2();
//     // cout << endl;
//     printLit();
// }