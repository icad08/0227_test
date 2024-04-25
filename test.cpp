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
    while ((current != NULL) && (current -> noMhs )){
        if (nim < current->noMhs ) {
            cout << "nim sudah ada" << endl;
            return;
        
        }
        previous = current;
        current = current->next;
    }
    nodeBaru->next  = current;
    previous->next = nodeBaru;

bool serachNode(int nim, Node* current, Node* previous) {
    previous = START;
    current = START;
    while (current != NULL && nim > current->noMhs)
    {
    previous = current;
    current = current->next;
    }

    if (current == NULL){
        return false;
    }
    else if (current-.noMhs  == nim) {
        return true;
    }
    else{
        return false;
    }
}

bool deleteNode (int nim) {
    node* current = Start;
    node* previous = Start;
    if (serachNode(nim, previous, current) == false)
    {return false;
    previous->next = current->next;}
    if  (Start == current)
    start = current->next;
    return true;
}
bool lisstEmpty(){
    if (start ==NULL)
    return  true;
    else  
     return false;
}

void traverse (){
    if (listEmpty()){
        cout<< "list kosong" <<endl;
        system ("pause");
        system("cls");
        return;
    }
}

int main(){

}