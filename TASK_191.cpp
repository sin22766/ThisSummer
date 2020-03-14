#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    set<int> s,t,result;
    cin >> n >> m;
    for (int i = 0; i < n+m; ++i) {
        int temp;
        cin >> temp;
        if(i>=n){
            s.insert(temp);
        }else{
            t.insert(temp);
        }
        result.insert(temp);
    }
    for (int j:result) {
        cout << j << " ";
    }
    cout << "\n";
    result.clear();
    set_intersection(s.begin(),s.end(),t.begin(),t.end(),std::inserter(result,result.begin()));
    if(result.size()==0){
        cout << "{}";
    }else{
        for (int j:result) {
            cout << j << " ";
        }
    }
    cout << "\n";
    result.clear();
    set_difference(t.begin(),t.end(),s.begin(),s.end(),std::inserter(result,result.begin()));
    if(result.size()==0){
        cout << "{}";
    }else{
        for (int j:result) {
            cout << j << " ";
        }
    }
    cout << "\n";
    result.clear();
    set_difference(s.begin(),s.end(),t.begin(),t.end(),std::inserter(result,result.begin()));
    if(result.size()==0){
        cout << "{}";
    }else{
        for (int j:result) {
            cout << j << " ";
        }
    }
    return 0;
}