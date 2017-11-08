//EJEMPLO DE USO DE EIGEN
//COMPILADO CON 

#include <iostream>
#include <eigen3/Eigen/Dense>      //Incluye el archivo dense la libreria Eigen

//Se le puede decir al compilador que busque en otros directorios:
//g++ -std=c++11 -I usr/include/eigen3/

//using Eigen::MatrixXd;
int main()
{
  
  Eigen::Matrix2d m(2,2);   //X significa tamaño dinamico y d, # tipo double
  Eigen::MatrixXd n(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  n==m;
  std::cout << 50*(m + n) << std::endl;
  
}
