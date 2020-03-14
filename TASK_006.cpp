#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h,v,sum=0;
    string row[4],origin[] = {"ABCD","EFGH","IJKL","MNO."};
    for (int i = 0; i < 4; ++i) {
        cin >> row[i];
    }
    for (int j = 0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i) {
            if(row[j][i]!='.'){
                if(row[j][i]!=origin[j][i]){
                    for (int k = 0; k < 4; ++k) {
                        int pos = origin[k].find(row[j][i]);
                        if(pos!=string::npos){
                            h = abs(k-j);
                            v = abs(pos-i);
                            sum+=h+v;
                            break;
                        }
                    }
                }
            }
        }
    }
    /*for (int j = 0; j < 4; ++j) {
        int pos = row[j].find(".");
        if(pos!=string::npos){
            h = j+1;
            v = pos+1;
        }
    }
     */
    cout << sum;
    return 0;
}
