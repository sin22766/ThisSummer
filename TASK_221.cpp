#include <iostream>
using lli = long long int;
using namespace std;
lli k,size = 0;
bool br = false;
string temp;

string fiboword(int n){
    if(br){
        return temp;
    }
    if(n==1){
        return "A";
    }else if(n==2){
        return "B";
    }else{
        temp = fiboword(n-2)+fiboword(n-1);
        if(temp.size() > k+1){
            cout << temp << "\n";
            br = true;
        }else{
            cout << fiboword(n);
            return fiboword(n-2)+fiboword(n-1);
        }

    }
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        br = false;
        int a;
        cin >> a >> k;
        fiboword(a).at(k-1);
//        cout << fiboword(a).at(k-1) << endl;
    }
    return 0;
}
