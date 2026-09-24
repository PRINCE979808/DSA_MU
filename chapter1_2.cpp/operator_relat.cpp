// | Operator | Meaning                  | Example  | Result  |
// | -------- | ------------------------ | -------- | ------- |
// | `==`     | Equal to                 | `5 == 5` | `true`  |
// | `!=`     | Not equal to             | `5 != 3` | `true`  |
// | `>`      | Greater than             | `5 > 3`  | `true`  |
// | `<`      | Less than                | `5 < 3`  | `false` |
// | `>=`     | Greater than or equal to | `5 >= 5` | `true`  |
// | `<=`     | Less than or equal to    | `3 <= 5` | `true`  |


#include<iostream>
using namespace std;
int main () {
    int a = 3, b = 5;
    cout << (3 < 5) << endl;// true(1)
    cout << (3 <= 5) << endl;// true(1)
    cout << (3 > 5) << endl;// false(0)
    cout << (3 >= 5) << endl;// false(0)
    cout << (3 == 3) << endl;// true(1)
    cout << (3 != 3) << endl;// false(0)
    cout << (3 != 5) << endl;//  true(1)
    return 0;
}
