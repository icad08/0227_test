#include <iostream>
using namespace std;

struct node {
    int noMhs;
    string name;
    node* next;
};

node* START =  NULL;

void addNode (){
    int nim;
    string nama;
    node* nodeBaru = new Node();
    cout << "masukkan nim:";
    cin >> nim;
    cout <<"masukkan nama : ";
    cin >> nama;
    nodeBaru->noMhs = nim;
    nodeBaru->name =nama;

    if (START ==  NULL) || nim < START->noMhs{
        if (START  != NULL && nim == START - > noMhs) {
            cout  << "nim sudah ada \n";
            return;
        }

        nodeBaru->next= START ;
        START = nodeBaru;
        return;

    }

    node* previous = START;
    node* current = START;
    while ((current != NULL) && (current -> noMhs ))
}

int main(){

}