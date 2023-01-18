#include <iostream>
#include <stack>
#include <queue>

int main()
{
    std::stack<int> st;
    std::queue<int> qe;

    for (int i = 0; i < 10; ++i)
    {
        st.push(i);
        qe.push(i);
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


    



    return 0;
}