//
//  main.cpp
//  HelloWorld
//
//  Created by Senyas on 2020/10/23.
//

#include <iostream>

using namespace std;

/*
 C 语言不支持函数重载；
 C++ 支持函数重载。
 */

/**
 函数重载 (Overload)
 
 规则：
    1、函数名相同；
    2、参数个数不同，参数类型不同、参数顺序不同。
 
 注意：
    1、返回值类型与重载无关；
    2、调用函数时，实参的隐式类型转换可能会产生二义性。
 
 本质：
    1、采用了 name mangling 或者叫 name decoration 技术
    2、C++ 编译器默认对富豪命（比如函数名）进行改编、修饰、有些地方翻译为 “命名倾轧”
    3、重载时会生成多个不同的函数名，不同的编译器(MSVC, g++)有不同的生成规则
    
 */

int sum(int v1, int v2) {
    return  v1+v2;
}

void display(int a) {
    cout << "dispaly int a: " << a << endl;
}

void dispaly(float a) {
    cout << "display float a: " << a << endl;
}

void display(double a)  {
    cout << "display double a:" << a << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    cout << "name: " << endl;
    
//    cout << sum(201, 30) << endl;
    
    
    /*
    cout << "please type a number:";
    int a;
    cin >> a;
    cout << "The number is: " << a << endl;
    */
    
    display(1);
    display(2.0);
    dispaly(12.3);
    
    getchar();
    
    return 0;
}


