#include <iostream>
#include <string>

int PalindromeCheck(std::string number, int start, int end)
{
    if(end - start == 1 || start == end)
    {
        return 1;
    }
    else
    {
        if(number[start] == number[end])
        {
            return PalindromeCheck(number, start + 1, end - 1);
        }
        else
        {
            return 0;
        }
    }
}
int main(){
    std::string number;
    std::cin >> number;
    int n = number.length();
    if(PalindromeCheck(number, 0, n-1))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}