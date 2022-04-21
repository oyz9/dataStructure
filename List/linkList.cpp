//
// Created by oyz on 2022/4/21.
//




#include <iostream>


using namespace std;
template <typename T>
struct linkNode{
    T data;
    linkNode *next;
};
template <typename T>
class linkList {
private:
    //头节点
    linkNode<T> *head;
    linkNode<T> *tail;
public:
    //传入节点初始化
    linkList(linkNode<T> *p) {
        tail = p;
        head->next = p;
    }

    linkList(T data) {
        linkNode<T> *p = new linkNode<T>;
        p->data = data;
        tail = p;
        head->next = tail;
        tail->next=NULL;
    }

    bool isEmpty() {
        if (head->next == NULL)return true;
        return false;
    }

    void add(T data) {
        linkNode<T> *p = new linkNode<T>;
        p->data = data;
        tail->next = p;
        tail = p;
        tail->next=NULL;
    }

    void remove() {
        linkNode<T> *p = head;
        while (p->next != tail) {
            p = p->next;
        }
        tail = p;
        tail->next=NULL;
    }

    void show() {
        linkNode<T> *p = head;
        int i = 0;
        while (p->next != NULL) {
            i++;
            cout << i << ":" << p->data << endl;
            p=p->next;
        }
        cout << "total number:" << i << endl;
    }
};
int main(){
    linkList<char> *l2 =new linkList<char>('a');
    l2->show();
    string s="bcdefghijk";
    for(int i=0;i<s.size();i++){
        l2->add(s[i]);
    }
    l2->show();
    for(int i=0;i<10;i++){
        l2->remove();
    }
    l2->show();
    delete l2;

};

