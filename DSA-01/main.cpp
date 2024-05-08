#include "LinkedList.cpp"

int main()
{
    LinkedList trial;
    int x;
    trial.addToHead(2);
    trial.addToHead(7);
    trial.addToHead(9);
    trial.addToTail(0);
    trial.Traverse();
    trial.removeFromTail(x);
    std::cout << "\n"
              << x << std::endl;
    trial.Traverse();
}
