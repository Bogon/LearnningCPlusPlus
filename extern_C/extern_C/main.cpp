//
//  main.cpp
//  extern_C
//
//  Created by Senyas on 2020/10/24.
//

#include <iostream>

//#include "math.h"

using namespace std;


/**
extern "C"
    1、被 extern “C”修饰的代码会按照C语言的方式去编译；
    2、如果函数同时有声明和实现，要按照函数声明被 extern "C"修饰，函数实现可以不修饰；
    3、由于C、C++编译规则的不同，在C、C++混合开发时，可能会经常出现以下操作：
        
 */

/*
 第三方库可能是是C语言实现的
 */

extern "C" {
    #include "math.h"
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout << "Hello, World!\n";
    
    cout << sum(20, 10) << endl;
    
    cout << delta(30, 20) << endl;
    
    cout << divide(30, 20) << endl;
    
    return 0;
}

/*
 
 extern "C" {

     void func() {
         
     }

     
 }

 void func(int a) {
     
 }
 
 */
