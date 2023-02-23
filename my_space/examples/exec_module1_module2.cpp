//
// Created by jlim on 23. 2. 23.
//

#include "module1/ClassMat.h"
#include "module2/ClassEigenMat.h"
#include <iostream>

int main(void)
{
    const auto mat_module1 = ClassMat();
    const auto mat_module2 = ClassEigenMat();
    std::cout<<"Success!@!"<<std::endl;

    return 0;
}
