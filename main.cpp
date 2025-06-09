#include <iostream>
<<<<<<< HEAD
#include <string>
using namespace std;

int main() {
    // Basic output
    cout << "Hello world\n\n";
    cout << "My name is Balogun\n";
    cout << 5 << "\n";
    cout << 3 + 7 << "\n";
    cout << 5 * 10 << "\n";
    cout << 100 / 10 << "\n";

    // Sum and multiplication
    int x = 15, y = 15, z = 15;
    int total = x + y + z;
    cout << "Multiplication (x * y): " << x * y << "\n";

    // Double variable
    double myNum = 1.5;
    cout << myNum << "\n";
    cout << "I am " << myNum << " years old.\n";

    // Boolean variable
    bool myBoolean = false;
    cout << "Boolean value: " << myBoolean << "\n";

    // String variable
    string name = "Mike";
    cout << "My name is " << name << ", I'm " << myNum << " years old and " << myNum << " feet tall.\n";

    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n";

    // Area of a rectangle
    int length = 10;
    int breadth = 15;
    int area = length * breadth;

    cout << "Length is: " << length << "\n";
    cout << "Breadth is: " << breadth << "\n";
    cout << "Therefore, the area of the rectangle is " << area << " square units\n";

    // User input (single number)
    int v;
    cout << "Type a number: ";
    cin >> v;
    cout << "Your number is: " << v << "\n";

    // Sum of two numbers
    int m, n, sum;
    cout << "Type in a number: ";
    cin >> m;
    cout << "Second number: ";
    cin >> n;
    sum = m + n;
    cout << "Sum is: " << sum << "\n";

    // Characters from ASCII values
    char a = 65, b = 66, c = 67;
    cout << "Characters: " << a << b << c << "\n";

    // Reuse name variable for new input
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!\n";

=======
using namespace std;

int main()
{
    cout << "Hello world \n\n";
    cout << "My name is balogun \n";
    cout << 5 << "\n";      // added \n
    cout << 3 + 7 << "\n";  // added \n
    cout << 5 * 10 << "\n"; // added \n
    cout << 100 / 99 << "\n";
    int a = 5;
    int b = 7;
    int sum = a + b;
    cout << "Sum is: " << sum << "\n"; // added \n
>>>>>>> a1d0d06234caa8911ef23cf907c507ec3e6b6703
    return 0;
}
