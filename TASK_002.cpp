#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double a, r, newA;
    if(scanf("%lf",&a)){
        r = sqrt(a / (4 * M_PI));
        newA = (a * r) / 3;
        printf("%.2lf", newA);
    }
    return 0;
}