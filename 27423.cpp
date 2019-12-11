#include <iostream>
using namespace std;
int main() {
    int times;
    do {
        cout << "高度?:";
        cin >> times;
       } while(times < 1 || times > 8);

       for(int i = 0; i < times;i++) {
           for (int j = 0; j <= i;j++) {
                cout << "#";
           }
           cout << "\n";
       }      
}
//抱歉晚交了
