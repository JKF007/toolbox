#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <iostream>
#include "toolbox.h"

using std::string;
using std::cout;

void removeCharTest1(){

    string test = "this is a test of removeChar()";
    string result = removeChar(test, ' ');

    if(result.compare ("thisisatestofremoveChar()") ==0){
        cout<< " removeChar() test 1 passed\n";
    }
    else{
        cout<< " removeChar() test 1 failed\n";
    }
};

void getDivisorsTest1(){

    vector <int> divisors ;
    getDivisors(12, divisors);

    vector <int> answer;

    answer.push_back(1);
    answer.push_back(2);
    answer.push_back(3);
    answer.push_back(4);
    answer.push_back(6);
    answer.push_back(12);

    if( compareVectors(divisors, answer) ){
        cout<< " getDivisorsTest1() test 1 passed\n";
    }
    else{
        cout<< " getDivisorsTest1() test 1 failed\n";
    }

};

int main(){

    removeCharTest1();

    getDivisorsTest1();

};


