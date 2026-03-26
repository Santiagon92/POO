#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ArraysMain1 {
public:
    vector<int> data;
    int n;

    
    ArraysMain1(int n) {
        this->n = n;
        data.resize(n); 
    }

    void Array(string name) {
        cout << name << " = [ ";
        for (int i = 0; i < n; i++) {
            cout << data[i];
            if (i < n - 1) {
                cout << " , ";
            }
        }
        cout << " ] " << endl;
    }
};

int main() {
    int n;
    cout << "Tamaño n : ";
    cin >> n;

    ArraysMain1 v(n);

    for (int i = 0; i < n; i++) {
        cout << " v [ " << i << " ]: ";
        cin >> v.data[i];
    }

    v.Array("v");

    return 0;
}
