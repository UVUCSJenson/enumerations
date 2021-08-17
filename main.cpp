// Plain enums (just ints)
#include <iostream>
using namespace std;

int main() {
    enum Color {RED, GREEN, BLUE};  // Type name is optional but recommended
    enum {PENNY=1, NICKEL=5, DIME=10, QUARTER=25};

    cout << RED << endl;
    Color g = GREEN;
    cout << g << endl;
    int b = BLUE;
    cout << b << endl;
    cout << NICKEL+DIME << endl;    // 15 not a valid coin value!
}

/* Output:
0
1
2
15
*/

// Scoped enums
// enum class Color {red, green, blue};

// void display_color(Color c) {
//     switch(c) {
//         case Color::red:
//             cout << "red\n";
//             break;
//         case Color::green:
//             cout << "green\n";
//             break;
//         case Color::blue:
//             cout << "blue\n";
//             break;
//     }
// }

// int main() {
//     Color c = Color::red;
//     display_color(c);       
// }
/* output:
red
*/