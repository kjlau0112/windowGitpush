// MiscellanouesTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

//Requires size as explicit argument
template <typename T> T sum_prototype_one(T* parr, int size) 
{
    T sum{};
    std::cout << "T sum{}" << sum << std::endl;

    for (int i = 0; i < size; i++) 
    {
        std::cout << "arr" << parr[i] << std::endl;
        sum += parr[i];
    }
    return sum;
}

//Size is implicitly calculated in non-type template argument
template <typename T, int size> T sum_prototype_two(T (&parr)[size] )
{
    T sum{};
    std::cout << "T sum{}" << sum << std::endl;

    for (auto &x : parr)
    {
        sum += x;
    }
    return sum;
}

// Size is implicitly calculated in non-type template argument
// using array class as function paramter
template <typename T, int size> T sum_prototype_three(std::array<T, size> &cpparray)
{
    T sum{};
    std::cout << "T sum{}" << sum << std::endl;

    for (auto& x : cpparray)
    {
        sum += x;
    }
    return sum;
}

int main()
{
    std::array<int, 6> cppArray { 1, 2, 3, 4, 5, 6 };
    int array[]{ 1,3,5,7,9 };
    std::cout << "value is" << sizeof(array) << std::endl;
    auto value = sum_prototype_one(array, 5);
    std::cout << "value is" << value << std::endl;

    auto valueAnothervalue = sum_prototype_two(array);
    std::cout << "valueAnothervalue is" << valueAnothervalue << std::endl;
    
    auto valueAlternativevalue = sum_prototype_three(cppArray);
    std::cout << "valueAnothervalue is" << valueAlternativevalue << std::endl;


}


