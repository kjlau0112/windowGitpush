// CPP_String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
int main()
{
    //std::cout << "Hello World!\n";
    //std::string myVar = "LMAO";
    //std::string myVar2 = "Hahahah!";
    //std::string myvar3 = myVar2 + myVar;

    //auto variable = 5.00323;
    //std::cout << myvar3 << std::endl;
    //std::stringstream ssObj;
    //int a = 1; int b = 1;
    //int sum = a+b;
    //ssObj << "sum of " << a << " & " << b << " is " <<sum<< std::endl;
    //std::string obj = ssObj.str();
    //std::cout << obj << std::endl;
    //ssObj.str("");

    //ssObj << sum;
    //auto stringVar = ssObj.str();
    //auto stringVar = std::to_string(sum); alterntaive for line 25
    //std::cout << stringVar << std::endl;
    std::string stringArr = "12 56 6464";
    int variable = 0;
    std::stringstream ssObj2;
    ssObj2.str(stringArr);

    while (ssObj2 >> variable) 
    {
        std::cout << variable << std::endl;
    }
}

