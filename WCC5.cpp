#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j = 0;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    
    int arr[10] = {a, b, c, d, e, f, g, h, i, j};
    int x = sizeof(arr) / sizeof(arr[0]);
    
        for(int i = 0; i < x; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << endl;
        }
    
    }
	return 0;
}
