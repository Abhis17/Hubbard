#include <iostream>
#include <cstdlib>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>

using std::cout, std::endl, std::cin;
using Eigen::MatrixXd;
using Eigen::VectorXd;

int main(int argc, char* argv[])
{
/*   int n = 0; 
  cout <<"print order:\n" ;
  cin >> n; */

  if(argc!=2)
  {
    std::cerr << "Enter size" << endl;
    exit(1857);
  }

  int n = std::atoi( argv[1] );


  MatrixXd m = MatrixXd::Zero(n,n) ; 
  // int t = 0;
  // cout <<"Enter value of t:\n" ;
  // cin >> t;
  double t = 1;
  
  for (int i=0;i < n;i++)
  {    
    m(i,(i+1)%n)= t;
    m((i+1)%n,i)= t;
    
  }
  
  Eigen::EigenSolver<MatrixXd> u(m);
  cout << u.eigenvectors() << '\n';
  cout << u.eigenvalues() << '\n';
  cout << m << std::endl;

}