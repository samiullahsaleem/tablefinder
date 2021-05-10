/******************************************************************************************************

                      This Program is written by Sami Ullah Saleem.
      He is an IT student at the Punjab University College Of Information and Technology. 
                      Email: bitf20m012@pucit.edu.pk
********************************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num, upperlimit, multiplier,num1;
    multiplier=1;
    std::cout << "Please Enter any whole number" << std::endl;
    std::cin >> num;
    std::cout << "Please enter your upper limit" << std::endl;
    std::cin >> upperlimit;
  
    if(upperlimit>20 || upperlimit<=0)
    {
        std::cout << "Please enter upperlimit between 1 and 20" << std::endl;
    }
  
    else if(num<0)
    {
        std::cout << "Please enter number which is whole" << std::endl;
    }
  
    else if (num>=0)
    {
         while(num>=0 && multiplier<=upperlimit)
    {
        num1 = num * multiplier;
        std::cout <<"|"<<num<< " * " <<multiplier << "|" << " = " << num1<<"|"<< std::endl;
        multiplier = multiplier+1;
        
    }  
    }
 
    return 0;
}
