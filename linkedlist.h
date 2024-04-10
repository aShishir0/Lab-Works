
class Node{
    public:
        int info;
        Node * next;

        Node(){}
        Node(int d):info(d), next(nullptr) {}
        Node (int d, Node * next) : info(d), next(next) {}
};

class Linkedlist{
    private:
        Node *head;
        Node *tail;
    public:
        Linkedlist();
        ~Linkedlist();
        void add_to_head(int data);
        void add_to_tail(int data);
        bool isEmpty();
        void traverse();
        void delete_node(int data);
};