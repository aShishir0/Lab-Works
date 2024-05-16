#include "LinkedList.cpp"
using namespace std;

int main()
{
    LinkedList trial;
    trial.isEmpty();
    trial.addToHead(1);
    trial.addToHead(2);
    trial.addToHead(3);
    trial.addToTail(0);
    trial.Traverse();
    cout<<trial.removeFromTail()<<" is removed"<<endl;
    trial.Traverse();
}
