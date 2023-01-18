#include <iostream>
#include <deque>
#include <array>
#include <list>
#include <vector>

void Deque();
void Vector();
void List();

template <typename T>
void PrintList(const std::list<T> &arr)
{
    for (auto it = arr.begin(); it != arr.end(); ++it)
        std::cout << *it << ' ';
}

int main()
{
    Deque();
    Vector();
    List();
    return 0;
}

void Deque()
{
    std::deque<int> deq;
    for (int count = 0; count < 4; ++count)
    {
        deq.push_back(count);       // вставляем числа в конец массива
        deq.push_front(10 - count); // вставляем числа в начало массива
    }

    for (int index = 0; index < deq.size(); ++index)
        std::cout << deq[index] << ' ';

    std::cout << '\n';
}

void Vector()
{
    std::vector<int> vect;
    for (int count = 0; count < 5; ++count)
        vect.push_back(10 - count); // добавляем числа в конец массива

    for (int index = 0; index < vect.size(); ++index)
        std::cout << vect[index] << ' ';

    std::cout << '\n';
}

void List()
{
    std::list<int> larr{4, 67, 9};
    larr.push_back(55);
    larr.push_front(11);

    PrintList(larr);
    std::cout << std::endl;
    larr.sort();
    for (auto it = larr.begin(); it != larr.end(); ++it)
    {
        std::cout << *it << ' ';
    }
}