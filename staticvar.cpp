// #include <iostream>
// // A variable declared static within the body of a function maintains its value
// // between invocations of the function.
// // 2. A variable declared static within a module (but outside the body of a
// // function) is accessible by all functions within that module. However, it is
// // not accessible by functions from other modules.
// // 3. static members exist as members of the class rather than as an instance in
// // each object of the class. There is only a single instance of each static data
// // member for the entire class.
// // 4. Non-static member functions can access all data members of the class:
// // static and non-static.
// // 5. Static member functions can only operate on the static data members.
// // 6. C functions declared static within a module may only be called by other
// // functions within that module (file scope).
// using namespace std;
// class LED {
// public:
//   int voltage;
//   int current;
//   int power;
//   static int val;
// static int val2; // static member variable;
// };
// int LED::val = 100;
// int LED::val2 = 100;
// int main() {
//   LED led1;
//   LED led2;
//   cout << "size of class LED = " << sizeof(led1) << endl;
//   cout << "static variable = " << led1.val << endl;
//   led1.val = 200;
//   led2.val2 =0;
//   cout << "static variable led1 = " << led1.val << endl;
//   cout << "static variable led2 = " << led2.val << endl;
//   // cout<<"address of static variable = "<<&led1.voltage<<endl;
//   cout << "address of static variable = " << &led1.val << endl;
//   cout << "address of static variable = " << &led2.val << endl;
//   cout << "address of static variable = " << &led1.val2 << endl;
//   cout << "address of static variable = " << &led2.val2 << endl;
//   cout << "address of voltage for led1= " << &led1.voltage << endl;
//   cout << "address of voltage  for led2= " << &led2.voltage << endl;
//   cout << "address of current for led1= " << &led1.current << endl;
//   cout << "address of current  for led2= " << &led2.current << endl;
// }
