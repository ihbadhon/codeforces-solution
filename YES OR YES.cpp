#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//Driver code
int main()
{
    int t;
    cin >> t;
    string str1 = "";
    for(int i=1; i<=t; i++){
        string str;
        cin >> str;
        for(int j=0; j<3; j++){
            str[j] = toupper(str[j]);
            str1.push_back(str[j]);
        }
         if(str1=="YES"){
        cout << "YES" << endl;
        str1 = "";
    }
    else {
        cout << "NO" << endl;
        str1 = "";
    }
    }


    return 0;
}
