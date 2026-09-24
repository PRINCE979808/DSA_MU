// | Data Type     |        Typical Storage | Example      |
// | ------------- | ---------------------: | ------------ |
// | `char`        |             **1 byte** | `'A'`        |
// | `bool`        |     **1 byte** usually | `true`       |
// | `short`       |            **2 bytes** | `100`        |
// | `int`         |            **4 bytes** | `25`         |
// | `long`        | **4 bytes** on Windows | `100000`     |
// | `long long`   |            **8 bytes** | `1000000000` |
// | `float`       |            **4 bytes** | `10.5`       |
// | `double`      |            **8 bytes** | `10.55555`   |
// | `long double` |         **8–16 bytes** | `10.55555`   |
// | `string`      |         **Fixed nahi** | `"Prince"`   |


// #include<iostream>
// using namespace std;

// int main(){

//     int age = 45;
//     cout<<age<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     cout << sizeof(char) << endl;
//     cout << sizeof(bool) << endl;
//     cout << sizeof(int) << endl;
//     cout << sizeof(float) << endl;
//     cout << sizeof(double) << endl;
//     cout << sizeof(long long) << endl;

//     return 0;
// }

// Type Casting

// Hindi:
// Ek data type ki value ko doosre data type mein convert karna Type Casting kehlata hai.

// English:
// Converting a value from one data type to another data type is called Type Casting.

// Example

// #include<iostream>
// using namespace std;

// int main(){
//     char grade  = 'a';//97 Yahan implicit type casting ho rahi hai:

    
//     int value = grade;//'a' ka ASCII value 97 hai, isliye char ko int mein convert karne par 97 milta hai.
//     cout<< value << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     double price = 100.99;// big value ko small value me type cast karrahe hai

//     int newprice = (int)price;
//     cout<<newprice<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main () {
//     int age = 25;
//     cout << age << endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main () {
//     int age = 25;
//     cout << sizeof(age) << endl;
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main () {
//     float age = 825.2578;
//     cout << sizeof(age) << endl;
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main () {
//     bool True = true;
//     cout << sizeof(true) << endl;
//     return 0; 
// }

// #include<iostream>
// using namespace std;

// int main () {
//     bool True = true;
//     cout << sizeof(true) << endl;
//     return 0; 
// }


// #include<iostream>
// using namespace std;

// int main () {
//     bool issafe = true;
//     cout << issafe << endl;
//     return 0; 
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int age = 26;
//     long long population = 10000000000;
//     float height = 5.8;
//     double price = 100.560;
//     char grade = 'A';
//     bool pass = true;

//     cout << age << endl;
//     cout << population << endl;
//     cout << height << endl;
//     cout << price << endl;
//     cout << grade << endl;
//     cout << pass << endl;

//     return 0;
// }



//Aur agar tum program se khud check karna chahte ho ki variable ka data type kya hai, C++ mein typeid()


// #include <iostream>
// #include <typeinfo>
// using namespace std;

// int main() {

//     int age = 26;
//     double price = 100.560;
//     char grade = 'A';
//     bool pass = true;

//     cout << typeid(age).name() << endl;
//     cout << typeid(price).name() << endl;
//     cout << typeid(grade).name() << endl;
//     cout << typeid(pass).name() << endl;

//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main() {
//     int age = 25;
//     char grade = 'a';
//     float PI = 3.14F;

//     cout<< PI << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
//     char grade = 'A';

//     int value = grade;

//     cout << value << endl;
//     return 0;
// }



// Type Casting ka matlab hai: ek data type ki value ko doosre data type mein convert karna.
// #include<iostream>
// using namespace std;
// int main() {
//     double price = 100.99;//double ko int mein convert karne par decimal part remove ho jata hai.

//     int newprice = (int)price;
//     cout << newprice << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "your age is : " << age << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     double price;
//     cout << "Enter your price: ";
//     cin >> price;
//     cout << "your enter price is repees = : " << price << endl;

//     return 0;
// }
















