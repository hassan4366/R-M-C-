//assin-1
#include <iostream>
using namespace std;
// 
int main()
{
  int age = 40;
  int period = 10;
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";
  int Age = 50;
  cout <<"After 10 Years My Age Will Be: "<< Age;
// 
  return 0;
}
//assin-2
#include <iostream>
using namespace std;
// 
int main()
{
  int a = 10;
  int b = 20;
  int c =70;
  cout << "Sum Of All Number Is: " << a + b + c;
  return 0;
}
//assin-3
/*
  name        [ Valid | Good Practice ] = Good Practice
  NAME        [ Valid | Bad Practice ] = Bad Practice
  1name       [ not correct ] => Reason ? begganing the number
  __name      [ correct ] => Reason ? _ not impect
*/
//assin-4
#include <iostream>
using namespace std;
// 
int main()
{
  // Write my_text Variable Content Here
  string my_text = "============\n== Elzero ==\n============";
// 
  cout << my_text;
  return 0;
}
//assin-5
#include <iostream>
using namespace std;
// 
int main()
{
  // Do Not Edit Below
  int a, b, c = 100;
  a , b , c = 100;
  // Do Not Edit Below
  cout << a + b + c; // 300
  return 0;
}
// 
//assin-6
#include <iostream>
using namespace std;
// 
int main()
{
  // Do Not Edit Below
  int a = 210, b = -50, c = -40;
// 
  cout << a - b - c ; 
// 
  return 0;
}
//assin-7
#include <iostream>
using namespace std;
// 
int num = 50;
// 
int read()
{
  int num = 100;
  cout << num;
  return 0;
}
// 
int play()
{
  int num = 200;
  read();
  return 0;
}
// 
int main()
{
  play();
  return 0;
}
//assin-8
int main()
{
  // Edit Here To Fix The Error
  int current_year;
  int birth_year;
// 
  // Do Not Edit Here
  current_year = 2022;
  birth_year = 1982;
  int age_in_years = current_year - birth_year;
  cout << age_in_years;
  return 0;
}
//assin-9
#include <iostream>
using namespace std;
// 
int main()
{
  int a;
  cin>> a;
  cout << a*a <<"\n";
  return 0;
}
//assin-10
#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout <<"Enter the first num = ";
  cin>> a;
  cout << "Enter the second num = ";
  cin >> b;
  cout << "The maltiple Two number = " << a*b<<"\n";
  return 0;
}
//assin-11
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello Elzero";
  cout << " Web School";
  cout << " I Love Programming";
  cout << " Too Much";
  cout << " Specially C++";
  return 0;
}