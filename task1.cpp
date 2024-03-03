#include "hw1.hpp"
 
enum class months
{
    jan = 1,
    feb,
    march,
    april,
    may,
    june,
    july,
    august,
    september,
    october,
    november,
    december
};

void    print_month(void)
{
    int i;

    while (1)
    {
        std::cout << "Enter the number of the month: \n";
        std::cin >> i;
        if (i < 0 || i > 12)
            std::cout << "invalid input \n";
        else if (i == 0)
        {
            std::cout << "Good bye\n";
            break;
        }
        else{
            switch(i)
            {
                case(static_cast<int>(months::jan)): 
                    std::cout << "january" << std::endl;
                    break;
                case(static_cast<int>(months::feb)):
                    std::cout << "february" << std::endl;
                    break;
                case(static_cast<int>(months::march)): 
                  std::cout << "march" << std::endl;
                  break;
                case(static_cast<int>(months::april)):
                  std::cout << "april" << std::endl;
                  break;
                case(static_cast<int>(months::may)): 
                    std::cout << "may" << std::endl;
                    break;
                case(static_cast<int>(months::june)):
                    std::cout << "june" << std::endl;
                    break;
                case(static_cast<int>(months::july)): 
                  std::cout << "july" << std::endl;
                  break;
                case(static_cast<int>(months::august)):
                  std::cout << "august" << std::endl;
                  break;
                case(static_cast<int>(months::september)): 
                  std::cout << "september" << std::endl;
                  break;
                case(static_cast<int>(months::october)):
                  std::cout << "october" << std::endl;
                  break;
               case(static_cast<int>(months::november)): 
                std::cout << "november" << std::endl;
                break;
                case(static_cast<int>(months::december)):
                std::cout << "december" << std::endl;
                break;
            }
        }

    }
}

int task1()
{
   print_month();
   return (0);
}