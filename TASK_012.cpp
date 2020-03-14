#include <iostream>
using namespace std;

int main() {
    string word;
    int n,m,count = 0;
    cin >> word >> n >> m;
    string scarf[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char temp;
            cin >> temp;
            if(temp=='*'){
                temp = word[count%word.size()];
                count++;
            }
            scarf[i].push_back(temp);
        }
    }
    for (string p:scarf) {
        cout << p << endl;
    }
}