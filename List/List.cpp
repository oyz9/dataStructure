//
// Created by 卢建璋 on 2022/4/7.
//

#include <iostream>
using namespace std;
template <typename T>
class list{
private:
    T *data;
    int nums;
    int maxSize;

public:
    list<T>(int maxSize) {
        data = new T[maxSize];
        nums=0;
        this->maxSize=maxSize;
    }



    bool isEmpty(){
        return nums==0;
    }

    bool isFull(){
        return nums==maxSize;
    }

    void add(T d){
        if (isFull()) cout<<"The list is full!"<<endl;
        else{
            data[nums++]=d;

        }
    }

    void remove(){
        if(isEmpty()) cout<<"The list is empty!"<<endl;
        else{
            nums--;
        }
    }

    void show(){
        if (isEmpty())cout<<"The list is empty!"<<endl;
        else{
            cout<<"The total numbers :"<<nums<<endl;
            for(int i=0;i<nums;i++){
                cout<<i<<":"<<data[i]<<endl;
            }
        }
    }

};
int main(){
    list<int> *l1 =new list<int>(10);

    for(int i=0;i<10;i++){
        l1->add(i);
        cout<<i<<endl;
    }
    l1->add(10);
    l1->show();
    for(int i=0;i<10;i++){
        l1->remove();
    }
    l1->show();
    delete l1;
}

