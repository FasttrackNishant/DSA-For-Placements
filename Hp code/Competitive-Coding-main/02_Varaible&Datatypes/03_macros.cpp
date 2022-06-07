#include <iostream>
using namespace std;
/*
// macro definition
#define LIMIT 10;

int main() {
    for (int i = 0; i < LIMIT; i++) {
        cout << i << " ";
    }
    cout<<LIMIT;
    return 0;
}

*/


// macro with parameter
#define Area(M, N)(M * N)

int main() {
    int l = 10, b = 5, a;
    a = Area(l, b);
    cout << "The Area of the rectangle is: " << a;
    return 0;
}