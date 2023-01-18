#include <iostream>
#include <stack>
#include <queue>
#include <list>

int main()
{
    std::stack<int> st;
    std::queue<int> qe;

    for (int i = 0; i < 10; ++i)
    {
        st.push(i);    // push - создает копию и потом переносит в колекцию. Затратно, медленее
        qe.emplace(i); //!!!рекоменд!!! быстрее!!  emplace - создает объект который помещаем в колекцию без копирования и перемещения.
        std::cout << st.top() << "s\t" << qe.back() << "q\n";
    }
    std::cout << st.top() << " is stack top;\t" << qe.front() << " is front queue and " << qe.back() << " - back";

    std::cout << "\nAfter delete elemnts: " << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        st.pop();
        qe.pop();
    }
    std::cout << st.top() << " is stack top;\t" << qe.front() << " is front queue and " << qe.back() << " - back";
    std::cout << std::endl;

    std::stack<int, std::list<int>> sl;
    for (size_t i = 0; i < 5; ++i)
    {
        sl.emplace(rand() % 100);
        std::cout << sl.top() << ' ';
    }
    std::cout << std::endl;

    while (!sl.empty())
    {
        std::cout << sl.top() << ' ';
        sl.pop();
    }
    std::cout << std::endl;
    //  auto cnt_st = sl._Get_container();
    //  std::cout << "На основе стек контейнер - " << sl._Get_container()<< std::endl;

    std::priority_queue<int> pr_s;
    pr_s.emplace(3);
    pr_s.emplace(1);
    pr_s.emplace(6);
    pr_s.emplace(22);
    pr_s.emplace(22);
    pr_s.emplace(11);
    while (!pr_s.empty())
    {
        std::cout << pr_s.top() << ' ';
        pr_s.pop();
    }

    return 0;
}