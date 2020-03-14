#include <iostream>
using namespace std;
class star{
public:
    int s;
    int d;
};
int main() {
    int n,lastY;
    cin >> n;
    int start[n],mul[n];
    for (int i = 0; i < n; ++i) {
        cin >> start[i] >> mul[i];
    }
    lastY = start[0];
    for (int j = 1; j < n; ++j) {
        int Y = start[j];
        while(Y <= lastY){
            Y += mul[j];
        }
        lastY = Y;
    }
    cout << lastY;
    return 0;
}

