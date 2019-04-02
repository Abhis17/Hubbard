#include <iostream>
#include <cstdlib>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
using namespace std;
#include <cmath>
using namespace Eigen;

class Basis
{
    public:
    int L;

    int create()
    {       
        for(int N=0;N<=2*L;N++)
        {   if ( N == 0)
            {    
                int binaryNum[2*L+1] = {0}; 
                cout <<"Basis Decimal Representation:" << 0 << "\n";
                cout <<"Basis Binary Representation:" <<"\n";
                for (int j = (2*L)-1; j >= 0; j--) 
                {     
                    cout << binaryNum[j] ; 
                }
                    
            }
            else
            {   int n_min = 0;
                int n_max = 0;
                for (int j=0;j<=N;j++)
                {
                    n_min = n_min + pow(2,j) ;
                    n_max = n_max + pow(2,(2*L - j)) ;
                }
                for (int i=n_min;i<=n_max;i++)
                {   
                
                    int binaryNum[2*L] = {0}; 
                    int p = 0; 
                    int l = i;
                    while (l > 0) 
                    { 
                        binaryNum[p] = l % 2; 
                        l = l / 2; 
                        p++; 
                    }
                    int sum = 0; 
                    for (int j = p-1; j >= 0; j--) 
                    {      
                        sum = sum + binaryNum[j]; 
                    }
  
                    if (sum == N)
                    {   cout <<"Basis Decimal Representation:" << i << "\n";
                        cout <<"Basis Binary Representation:" <<"\n";
                        for (int j = (2*L)-1; j >= 0; j--) 
                        {     
                            cout << binaryNum[j] ; 
                            //for (int k = )
                        }
                        //int binary[2**16] = {0}
                        //binary[i]=
                    }

                }

            }


        }
        


    }

};

//class c_dag
//{
    //public:
    //int binary ;


//}
int main()
{
    Basis obj1;
    obj1.L = 4;
    obj1.create();

}