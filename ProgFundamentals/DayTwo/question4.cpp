#include <iostream>
#include <string>

using namespace std;

int main()
{
    typedef string mystring;

    mystring arr[10];
    int arrSize = 0;
    string longestString;
    cout<< "Enter ten strings, to see the longest!"<<endl;
    for(int i =0; i<10; i++){
        cin>>arr[i];
    }
    for (int j= 0; j<10; j++){
        if (arr[j].length() > arrSize ){
            // arrSize = arr[j].length();
            // longestString = arr[j];
            // cout <<longestString;
        }
    }

    return 0;
}
