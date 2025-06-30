// //assin-1
// // Example
// false // bool => Boolean

// 'a'  =>string
// '9'  =>string
// 9    =>int
// true  =>boolean
// 100   =>int
// -10   =>int
// 0    =>int
// false  =>boolean
// 10.9   =>float
//assin-2
#include <iostream>
using namespace std;
// 
int main(){
    double salary = 5000.98;
    cout<< sizeof(salary)<<"\n";
    cout << sizeof(salary)*8;
    return 0;
}
//assin-3
#include <iostream>
#include <limits>
using namespace std;
// 
int main(){
    cout << "Maximum Integer Number Is => " <<numeric_limits<int>::max() << "\n";
    cout << "Minimum Integer Number Is =>" << numeric_limits<int>::min  ()<<"\n";
    cout << "Maximum Short Integer Number Is =>" <<numeric_limits<short>::max()<<"\n";
    cout << "Minimum Short Integer Number Is =>" <<numeric_limits<short>::min()<<"\n";
    return 0; 
}
// //assin-4
#include <iostream>
using namespace std;
int main(){
cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 4byte
}

//assin-5
#include <iostream>
using namespace std;
// 
int main(){
// 
char a = '~';
char b = '&';
char c = '%';
char d = 'A';
cout << "ASCII Value of ~ Is " << toascii(a) <<"\n";
cout << "ASCII Value of & Is " << toascii(b) <<"\n";
cout << "ASCII Value of % Is " << toascii(c) <<"\n";
cout << "ASCII Value of A Is " << toascii(d) <<"\n";
return 0;
}
//assin-6
#include <iostream>
using namespace std;
// 
int main(){
// 
int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;
cout <<char(a);
cout <<char(b);
cout << char(c) ;
cout << char(d);
cout << char(e);
cout << char(f);
return 0;
}
//assin-7 
#include <iostream>
using namespace std;
int main(){
// Edit Anything Except Values
short int a = 100;
long long int b = 15001500;
long double c = 100.54565746;
// 
// Do Not Edit
cout << sizeof(a) << " Bytes\n"; // 2 Bytes
cout << sizeof(b) << " Bytes\n"; // 8 Bytes
cout << sizeof(c) << " Bytes\n"; // 16 Bytes
}
//assin-9
#include <iostream>
using namespace std;
int main(){
    // Edit Anything Except Values
unsigned int a = 100;
signed int b = -100;
short c = 100;
double d = 500.55;
// 
// Do Not Edit
cout << a << "\n"; // 100
cout << b << "\n"; // -100
cout << c << "\n"; // 100
cout << d << "\n"; // 500.55
}
//assin-10
#include <iostream>
using namespace std;

int main(){
long long int x = 12798294839;
long int y = 1554312;
cout << x << "\n";
// 
long long num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005
return 0;
}
//assin-11
#include <iostream>
using namespace std;
// 
int main(){
short int a = 100;
float b = 98.5f;
double c = 1.7;
// 
// Edit This Line And Use Type Casting To Get The Output
cout << int(a + b + c) << "\n"; // 200
return 0;
}
//assin-12
#include <iostream>
using namespace std;

int main(){
short a = 1000;//2
int b = 10000;//4
long double c = 5.560000505012;//16

// Change ??? To Something Else To Get The Output
cout << sizeof(c) - sizeof(b) << "\n"; // 12
cout << sizeof(b) + sizeof(c) << "\n"; // 20
cout << sizeof(c) * sizeof(a) << "\n"; // 32
}