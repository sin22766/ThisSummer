#include <cstdio>
#include <cmath>
#define PI 3.14
using namespace std;

int main() {
    int q;
    scanf("%d",&q);
    float result[q],sum = 0;
    for (int i = 0; i < q; ++i) {
        char c;
        float a,b;
        scanf(" %c",&c);
        if(c=='R'){
            scanf(" %f %f",&a,&b);
            result[i] = a*b;
            sum += a*b;
        }else if(c=='C'){
            scanf(" %f",&a);
            result[i] = PI*a*a;
            sum += PI*a*a;
        }else if(c=='T'){
            scanf(" %f %f",&a,&b);
            result[i] = a*b/2;
            sum += a*b/2;
        }
    }
    for (float j:result) {
        printf("%.2f\n",j);
    }
    printf("%.2f\n",sum);
    return 0;
}