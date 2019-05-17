#include <iostream>
#include <cstring>
#include <algorithm>

#include <cmath>

using namespace std;
bool buffer[3100][6144];
void func(int x, int y, int length){
    if (length == 3){
        buffer[x][y] = true;
        buffer[x+1][y-1] = true;
        buffer[x+1][y+1] = true;
        buffer[x+2][y-2] = true;
        buffer[x+2][y-1] = true;
        buffer[x+2][y] = true;
        buffer[x+2][y+1] = true;
        buffer[x+2][y+2] = true;

    }else {
        func(x, y, length/2);

        func(x+length/2 , y+length/2, length/2);

        func(x+length/2, y-length/2, length/2);
    }
}
int main() {
    cin.tie(NULL);


    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    for (int x= 0; x<n; x++){
        for (int y = 0; y< 2*n; y++){
            buffer[x][y] = false;
        }
     }
    func(0,n-1,n); // n =3 3, 5 n=6 1112

    for (int x= 0; x<n; x++){
        for (int y = 0; y< 2*n; y++){
            if (buffer[x][y]) cout << '*';
            else cout << ' ';
        }
        if (x != n-1) cout << '\n';
    }

    return 0;
}