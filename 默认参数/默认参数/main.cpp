//
//  main.cpp
//  默认参数
//
//  Created by Senyas on 2020/10/24.
//

#include <iostream>

using namespace std;

/**
 默认参数
    C++允许设置默认参数，在调用时可以根据实际情况省略实参，规则如下：
        1、默认参数只能按照从右到左的顺序，
        2、如果函数同时有声明、实现、默认参数只能放在函数声明中
        3、默认参数可以是常量、全局符号(全局变量、函数名)
 
    如果函数的实参经常是同一个值，可以考略使用默认参数。
 
    函数重载、默认参数可能会产生冲突、二义性(建议优先选择使用默认参数)
 */

int sum(int a = 5, int b = 6) {
    return  a+b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    cout << "Hello, World!\n";
    
    cout << "sum: " << sum(1,2) << endl;
    
    cout << "sum: " << sum(1) << endl;
    
    cout << "sum: " << sum() << endl;
    
    return 0;
}
