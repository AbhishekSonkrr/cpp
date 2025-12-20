/*-------------------------------
Example of all types of operators
--------------------------------*/

#include <iostream>
using namespace std;
int main() {
    // a. Arithmetic
    int num1 = 2;
    int num2 = 3;

    // b. Logical
    bool exp1 = true;
    bool exp2 = false;

    // c. Ternary
    int marks;

    /* == ARITHMETIC OPERATORS == */
    cout << "---ARITHMETIC OPERATORS---\n";
    cout << "sum:" << num1 + num2 << endl;  // RESULT: 5

    cout << "subtract:" << num1 - num2 << endl;  // RESULT: -1

    cout << "multiplication:" << num1 * num2 << endl;  // RESU`LT: 6

    cout << "division:" << num1 / num2 << endl;  // RESULT: 0  (because num1 , num2 are integer so we get only
     // inter par in result)

    cout << "modulus:" << num1 % num2 << endl;  // RESULT: 2 (remainder)

    /* == LOGICAL OPERATORS == */
    cout << "---LOGICAL OPERATORS---\n";
    // if first statement is false then i will not check next statement

    cout << "logical AND" << (exp1 && exp2) << endl;  // RESULT: false

    // if first statement is true then it will not check another statement

    cout << "logical OR" << (exp1 || exp2) << endl;  // RESULT: true

    // if true then false and vice versa

    cout << "logical NOT" << (!exp1) << endl;  // RESULT: false

    /* == TERNARY OPERATORS == */
    cout << "---TERNARY OPERATORS---\n";
    cout << "marks: ";

    cin >> marks;

    // COONDITION ? TASK1 : TASK2 {IF CONDTION IS TRUE THEN TASK1 EXECUTED ELSE
    // TASK2}
    marks > 30 ? cout << "pass" : cout << "fail";

    /* == ASSIGNMENT OPERATOR == */
    cout << "---ASSIGNMENT OPERATOR---\n";
    int num3 = 6;
    int num4 = 5;

    int c = num3 + 4;  // it calculate the sum of num1 and 4(but does not change the value of num1)

    num3 += 3;  // it adds 3 to num1 and updates num1 with the new value(num3 = num3 + 4)
    num4 += 2;

    cout << "Sum of num1 and 4: " << c << endl;

    cout << "Updated num1 (after adding 3): " << num1 << endl;

    cout << "Updated num2 (after adding 2): " << num2 << endl;

    /*BITWISE OPERATORY*/
    cout << "---BITWISE OPERATOR---\n";
    int a = 13;  // 1101 in binary
    int b = 5;   // 0101 in binary

    // Bitwise AND: 1101 & 0101 = 0101 (5)
    cout << "The value of a & b is " << (a & b) << endl;

    // Bitwise OR: 1101 | 0101 = 1101 (13)
    cout << "The value of a | b is " << (a | b) << endl;

    // Bitwise XOR: 1101 ^ 0101 = 1000 (8)
    cout << "The value of a ^ b is " << (a ^ b) << endl;

    // Bitwise NOT: ~1101 = ...11110010 (depends on int size, usually -14)
    cout << "The value of ~a is " << (~a) << endl;

    // Right shift: 1101 >> 2 = 0011 (3)
    cout << "The value of a >> 2 is " << (a >> 2) << endl;

    // Left shift: 1101 << 2 = 110100 (52)
    cout << "The value of a << 2 is " << (a << 2) << endl;

    return 0;
}