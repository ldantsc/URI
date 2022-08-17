#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
    int a, b, c, maiorAb;
    scanf("%d %d %d",&a, &b, &c);

    if (c > b && c > a) {
        printf("%d eh o maior\n", c);
    }
    else {
    maiorAb = (a+b+abs(a-b))/2;
    printf("%d eh o maior\n", maiorAb);
    }
}