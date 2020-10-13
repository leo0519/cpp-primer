#include <cstring>
#include <iostream>
#include "worker.h"
#include "queue.h"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Queue<Worker, 10> q;
    
    if(q.isempty())
        cout << "Queue is empty" << endl;

    cout << "add worker1 to queue..." << endl;
    Worker w1("shao", 1);
    q.push(w1);

    cout << "add worker2 to queue..." << endl;
    Worker w2("zheng", 2);
    q.push(w2);

    cout << "add worker3 to queue..." << endl;
    Worker w3("jiang", 3);
    q.push(w3);

    if(q.isfull())
        cout << "queue is full" << endl;

    Worker w;
    cout << "delete worker1..." << endl;
    q.pop(w);
    w.Show();

    return 0;
}
