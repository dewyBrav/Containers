#include <iostream>
#include <set>
#include <map>
#include <typeinfo>

template <typename T>
void PrintIt(const T &contr)
{
    std::cout << typeid(T).name() << '\t';

    for (const auto &elem : contr)
    {
        std::cout << elem << ' ';
    }
    std::cout << std::endl;
}

int main()
{

    std::set<int> sArr;
    std::multiset<int> msArr;

    for (int i = 3; i < 10; ++i)
    {
        sArr.insert(i);
        msArr.insert(i);
    }
    sArr.insert(5);
    sArr.insert(1);
    sArr.insert(2);
    msArr.insert(5);

    PrintIt(sArr);
    PrintIt(msArr);

    std::cout << "MAP:";

    std::map<std::string, std::string> myMap;
    myMap.emplace("24", "CD");
    myMap.insert(std::pair<std::string, std::string>("23", "DVD"));
    myMap.insert(std::make_pair("11", "HDD"));
    myMap.emplace("3", "SDD");
    myMap.emplace("3", "SDD2");

    for (const auto &el : myMap)
    {
        std::cout << el.first << ' ' << el.second << "\t";
    }
    std::cout << std::endl;
    // описк по ключу "5". Такого нет.
    auto it_map = myMap.find("5");
    if (it_map != myMap.end())
    {
        std::cout << it_map->first << ' ' << it_map->second << std::endl;
    }
    else
    {
        std::cout << "No found" << std::endl;
    }
    std::cout << myMap["24"] << std::endl; //по ключу

    std::cout << std::endl;

    return 0;
}