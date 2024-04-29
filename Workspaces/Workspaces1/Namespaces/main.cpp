#include <iostream>

using namespace std; /* 使用standard套件(std)的命名空間 -> 如此一來就不用再 每個套件所屬的變數(屬性、方法)前面宣告命名空間(套件名稱)了， 但在大型專案中還是直接用命名空間限制比較好*/

int main()
{
    int favorite_number;
    
    cout << "Enter your favorite number between 1 and 100: ";
    cin >> favorite_number;
    cout << "No really!! " << favorite_number << " is my favorite number, too!" << endl;
    
    return 0;
}

