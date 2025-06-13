// #include <iostream>
// using namespace std;
// class LED
// {
// int voltage;
// int current;
// int power;//private member function can be only accessed by the member functions of the same class

// public:
//   void set_value(int c, int v);
//   int calc_power(int c, int v);//class size only includes the size of the data members and not the methods
// };
// void LED::set_value(int c, int v)
// {
//   current = c;
//   voltage = v;
//   std::cout<<"current = "<<current<<std::endl;
//   std::cout<<"voltage = "<<voltage<<std::endl;

// }
// int LED::calc_power(int c, int v)
// {
//   power = c*v;
//   return power;
// }
// int main() {
//   std::cout << "Hello World!\n";
//   LED led1;
//   led1.set_value(11, 20);
//   std::cout<<"power = "<<led1.calc_power(11, 20)<<std::endl;
//   std::cout<<"sizeof class LED = "<<sizeof(led1)<<std::endl;
// }
