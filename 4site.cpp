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
    {   int binary[1<<(2*L)][(2*L)] = {0};
        int k = 0;   
        for(int N=0;N<=2*L;N++)
        {   if ( N == 0)
            {    
                int binaryNum[2*L] = {0}; 
                cout <<"Basis Decimal Representation:" << 0 << "\n";
                cout <<"Basis Binary Representation:" <<"\n";
                for (int j = (2*L)-1; j >= 0; j--) 
                {     
                    cout << binaryNum[j] ; 
                }
                    
            }
            else
            {   int n_min = (1<<(N))-1;
                int n_max = (1<<(2*L))-(1<<(2*L-N));
                //for (int j=0;j<N;j++)
                //{
                    //n_min = n_min + pow(2,j) ;
                    //n_max = n_max + pow(2,(2*L-1 - j)) ;
                //}
                
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
                    {   cout <<"\n"<<"Basis Decimal Representation:" << i << "\n";
                        cout <<"Basis Binary Representation:" <<"\n";
                        
                        for (int j = (2*L)-1; j >= 0; j--) 
                        {   
                            binary[k][j] = binaryNum[j];
                            cout << binaryNum[j] ;     
                        }
                        k++;
                    }
                }
            }
        }
    }
};

class c_dag
{
    public:
    int spin, site, old_basis[][] ;
    int action()
    {
        if (spin=up && site <= L)
        {  for() 
            int new_basis[t][site-1] = 
        }
        if (spin=down && site <= L)
        {

        }
    }

};
int main()
{
    Basis obj1;
    obj1.L = 4;
    obj1.create();

}
