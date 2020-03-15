#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    int h= 0;
    if(2*area%base==0)
    {
        h = 2*area/base;
    }
    else
    {
        h = 2*area/base + 1;
    }
    return h;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
