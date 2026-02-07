// #include <iostream>
// using namespace std;

// class hero {
//     int health;
//     float hac;
// };
// int main(){
//     hero h1;
//     cout << "Size is :: " << sizeof(h1) << endl;
// }




// Create a class with constructor & display method

// #include <iostream>
// using namespace std;
// class Student{
//     string name;
//     int age;

//     public:
//         Student(string n, int a) {
//             name = n;
//             age = a;
//         }
//         void show(){
//             cout << "Name is :: " << name << " " << endl;
//             cout << "Age is :: " << age << " " << endl;
//         }
// };

// int main() {
//     Student sa("Anuj", 22);
//     Student s2("Aakrisht", 21);
//     Student s3("Ankit", 23);
//     Student s4("Aditya", 34);
//     sa.show();
//     s2.show();
//     s3.show();
//     s4.show();
// }




// Count Number of Objects Created in C++


#include <iostream>
using namespace std;
class Student{
public:
    static int count;
    Student() {
        count++;  // increases every time object is created
    }
};
int Student::count = 0;  // initialize static variable

int main() {
    Student s1;
    Student s2;
    Student s3;
    Student s4;

    cout << "Number of Object is Created :: " << Student::count << endl;
}