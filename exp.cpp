#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;

typedef unsigned long long ull;

unsigned long long Factorial(ull);
int main()
{

  unsigned long long L = 0;
  std ::cerr <<"Enter L:\n" ;
  std ::cin >> L;
   unsigned long long n = 0;
  std ::cerr <<"Enter n:\n" ;
  std ::cin >> n;
  unsigned long long array1[n];
  unsigned long long array2[n];
  unsigned long long array3[n];
  
  for (int i=L;i<L+n;i++){
      array3[i-L] = 1;
      for(ull j=i+1;j<=2*i;j++){
          array3[i-L]=j*array3[i-L];
        
        }      
        array1[i-L]=i;
        array2[i-L]=(array3[i-L])/Factorial(i);
       
   }
  for(int i = 0; i < n; ++i){
    std:: cerr<<"The value of L is:\n" <<array1[i]<<"\n";
    std::cout<<array1[i]<<"\t";
    std::cerr<<"The value of Factorial is:\n" <<array2[i]<<"\n";
    std::cout<<array2[i]<<"\n";
  }
  

}
unsigned long long Factorial(ull a)
{
    unsigned long long value =1;
    for(int i=1;i<=a;i++){
        value *= i;
    }
    return value;
}