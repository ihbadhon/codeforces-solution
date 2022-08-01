#include <iostream>
#include <vector>

using namespace std;


//Driver code
int main()
{
    int t;
    cin >> t;

    while(t--){
        int key, a, b, c;
        int cnt=0;

        cin >> key >> a >> b >> c;

        vector<int> keys = {a, b, c}; // 0, 1, 2 order
        key = keys[key-1];

        if(key != 0){
            cnt++;
            key = keys[key-1];
        }
        if(key != 0){
            cnt++;
            key = keys[key-1];
        }

        if(cnt==2){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}
