#include <iostream>
#include <eigen3/Eigen/Dense>

int main() {
    Eigen::Vector3d v(1,2,3);
    std::cout << "Vector v:\n" << v.transpose() << std::endl;
    
    /*Eigen::MatrixXd A(2, 2);
    A << 1, 2,
         3, 4;

    std::cout << "Matrix A:\n" << A << std::endl;
*/
    return 0;
}