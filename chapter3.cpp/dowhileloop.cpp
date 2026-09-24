// A do-while loop is a looping statement in C++ that executes the code at least once and then checks the condition. If the condition is true, the loop runs again
// do...while loop executes the code at least once, then checks the condition.

// #include <iostream>
// using namespace std;
// int main() {
//     do {
//     cout << "hello world\n";
//     } while (3 > 5);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10;
//     int i = 1;

//     do {
//     cout << i << " ";
//     i++;
//     } while (i <=n );

//     cout << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std ;
// int main () {
//     int n = 8;
//     bool isprime = true;

//     for(int i = 2; i<n-1; i++) {
//         if (n % i == 0) {
//             isprime = false;
//             break;
//         }
//     }

//     if(isprime == true) {
//         cout << "prime no \n";
//     } else {
//         cout << " non prime no \n";
//     }
//     return 0;
// }



#include <iostream>
using namespace std ;
int main () {
    int n = 14;
    bool isprime = true;

    for(int i = 2; i*i <= n-1; i++) {
        if (n % i == 0) {
            isprime = false;
            break;
        }
    }

    if(isprime == true) {
        cout << "prime no \n";
    } else {
        cout << " non prime no \n";
    }
    return 0;
}