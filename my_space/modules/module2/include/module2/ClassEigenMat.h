//
// Created by jlim on 23. 2. 23.
//

#ifndef MY_SPACE_CLASSEIGENMAT_H
#define MY_SPACE_CLASSEIGENMAT_H
#include "Eigen/Dense"
class ClassEigenMat
{
public:
    ClassEigenMat() = default;

private:
    Eigen::Matrix3d eigen_mat_;
};

#endif //MY_SPACE_CLASSEIGENMAT_H
