// #include <iostream>
// class baseClass{
// private:
// int x;

// public:
// void baseMethod(){
// x=10;
//   std::cout<<"inside base method   x = "<<x<<std::endl;
//   std::cout<<"inside base method"<<std::endl;
// }
// };
// class derivedClass:public baseClass{

// public:

// void derivedMethod()
// {

//   std::cout<<"inside derived method"<<std::endl;
// }
// };
// struct baseStruct{
// int x;
// void baseStructMethod()
// {
//   std::cout<<"inside base struct method"<<std::endl;
// }
// };
// struct derivedStruct:public baseStruct{

// void derivedStructMethod()  {
//   std::cout<<"inside derived struct method"<<std::endl;
// }
// };

// int main() {
//   //std::cout << "Hello World!\n";
//   derivedClass obj1;
  
//   obj1.baseMethod();
//   obj1.derivedMethod();
//   derivedStruct struct1;
//   baseStruct baseStruct1;
//   //struct1.baseStructMethod();//'baseStructMethod' is a private member of 'derivedStruct'
//   struct1.derivedStructMethod();
//   struct1.baseStructMethod();
//   baseStruct1.x = 100;
//   std::cout<<"base struct x = "<<baseStruct1.x<<std::endl;
//   std::cout<<"sizeof class = "<<sizeof(obj1)<<std::endl;
//   std::cout<<"sizeof derivedClass = "<<sizeof(derivedClass)<<std::endl;
//   std::cout<<"sizeof base struct = "<<sizeof(baseStruct1)<<std::endl;
//   std::cout<<"sizeof derivedStruct = "<<sizeof(derivedStruct)<<std::endl;
  
  
  
// }
