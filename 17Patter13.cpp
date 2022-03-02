#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter Number Of Rows: ";
    cin >> n;

    
    int row = 1;

    while(row <=n ){
        int col = 1;
        while (col <= n)
        {
            char value = 'A' + row + col - 2;
            cout << value << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
        
    }
}