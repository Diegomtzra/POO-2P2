#include<iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1) {
        return n;
    }else {
        return fibo(n - 2) + fibo(n - 1);
    }   
}

int main()
{
    cout<<"\tFIBONACCI"<<endl;
    
    int i, num;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    
    cout<<"\nLa serie es:\t";
    
    for(i=0; i<num; i++)
    {
       if(fibo(i) != 0)
          cout<< ", "; 
        
        cout<< fibo(i);       
    }
}
