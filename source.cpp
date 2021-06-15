#include <macro_given_as_headerfile.h>
#include <variable_given_as_headerfile.h>
#include HEADER_ONE
#include HEADER_TWO 
#include <iostream>

int main(){
    std::cout << VAR_GIVEN_AS_MACRO << std::endl;
    std::cout << MACRO_GIVEN_AS_MACRO << std::endl;
    std::cout << MACRO_GIVEN_AS_HEADERFILE << std::endl;
    std::cout << VAR_GIVEN_AS_HEADERFILE << std::endl;
    return 1;
}
