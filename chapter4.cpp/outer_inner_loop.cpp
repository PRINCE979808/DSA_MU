
//         Column
//         1  2  3  4  5
//       ┌──┬──┬──┬──┬──┐
// Row 1 │ *│ *│ *│ *│ *│
//       ├──┼──┼──┼──┼──┤
// Row 2 │ *│ *│ *│ *│ *│
//       ├──┼──┼──┼──┼──┤
// Row 3 │ *│ *│ *│ *│ *│
//       ├──┼──┼──┼──┼──┤
// Row 4 │ *│ *│ *│ *│ *│
//       └──┴──┴──┴──┴──┘
//4 Rows × 5 Columns = 20 stars


// Golden rule 🔥

// Outer loop → rows control karta hai.

// Inner loop → har row ke andar kya print hoga, wo control karta hai


// #include <iostream>
// using namespace std;
// int main (){

//     int n = 4;
//     for (int i = 1; i<=n; i++){// ROW
        
//         for(int j = 1; j<=n; j++){// COLUMN
//             cout << "A" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main (){

//     int n = 4;
//     for(int i = 1; i <= 4; i++) {
//     cout << i << endl;
//     }

//     return 0;
// }


// // samjhna ke leyea
// #include <iostream>
// using namespace std;
// int main (){

//     for(int i = 1; i <= 3; i++) {

//         for(int j = 1; j <= 4; j++) {

//             cout << i << j << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }


// pp -o outer_inner_loop } ; if ($?) { .\outer_inner_loop }
// 11 12 13 14 
// 21 22 23 24 
// 31 32 33 34 