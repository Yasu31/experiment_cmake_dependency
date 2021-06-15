#include <normal_headerfile.h>
#include HEADER_FILE
#include <iostream>

int main(){
    std::cout << var_given_as_macro << std::endl;
    std::cout << var_given_as_headerfile << std::endl;
    std::cout << MACRO_GIVEN_AS_MACRO << std::endl;
    std::cout << MACRO_GIVEN_AS_HEADERFILE << std::endl;
    return 1;
}
