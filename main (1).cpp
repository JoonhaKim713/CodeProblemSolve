 
#include <iostream>
#include <string>
#include <vector>

namespace A
{
    int size;
    int i;
    int v1 = 0;
    int v2 = v1 + 1;
    int v3 = v2 + 1;
    std::string combinationArray;
    std::string sizeArray;
    std::string name;
 
    
    
    
    int Option()
    {
        std::cout << "Please type the number of elements that you want to find the combination : ";                 
        std::cin >> size; // user input number of elements
        std::cout << "You want to find the combination from " << size << " elements\n" // shows user input
                  << "Please type the elements you want\n"; // user starts to input the elements
        return size;
    }
    
    std::string* CombinationCal()
    {
        std::string combinationArray[size];
        for (i = 0; i < size; i++)
        {
            std::cout << "Number " << (i + 1) << " elements: ";
            std::cin >> name;
            combinationArray[i] = name;
            std::cout << combinationArray[i] << std::endl;
            
        }
        
        for (v1 = 0; v1 < size ; v1++)
        {
            
            for (v2 = v1 + 1; v2 < v3; v2++)
            {
                
                for (v3 = v2 + 1; v3 < size; v3++)
                {
                    std::cout << combinationArray[v1] << combinationArray[v2] << combinationArray[v3] << std::endl;
                }
            }
        }
        
    }
    
    double Howmanycombination(double factorial)
    {
        for (int i = 1; i <= size; ++i)
        {
            factorial *= i;
        }
         
        return  factorial;
    }
}


int main()
{
    double a, b, c;
    a = A::size;
    b = a - c;
    c = 3;
    
    A::Option();
    A::CombinationCal();
    
    A::Howmanycombination(a);
    
    std::cout << a << std::endl;
    
    A::Howmanycombination(b);
    
    A::Howmanycombination(c);
    
    int result = a / (c*b);
    
    std::cout << result;
}
    
    
   
    
   
    
        
    



