#include <iostream>
#include "List.hpp"

int main(){
    List<int> test_list;
    // test_list.insert(0, 3);
    // test_list.insert(1, 4);
    // test_list.insert(2, 5);
    // test_list.insert(4, 6);
    // test_list.insert(5, 3);
    // test_list.insert(6, 4);
    // test_list.insert(7, 5);
    // test_list.insert(8, 9);
    // test_list.traverse();

    test_list.insert(0, 1);
    test_list.insert(1, 2);
    test_list.insert(2, 5);
    test_list.insert(4, 10);
    test_list.insert(5, 5);
    test_list.insert(6, 6);
    test_list.insert(7, 7);
    test_list.insert(8, 8);
    test_list.traverse();



    //std::cout << "\n" << test_list.getPointerTo(3)->getItem() << std::endl;
    

    List<int> return_list = test_list.scanSublist(7);
    return_list.traverse();
    
}