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
    else {
        node* correntNode = start;
        while (correntNode != NULL){
            cout << "NIM : " << correntNode -> noMhs <<",nama" << currentNode ->name << endl;
            currentNode + currentNode -> nect;

        }
    }
}

void searchData(){
    if (listEmpty()){
        cout << "list kosong" << endl;
        system ("pause");
        system ("cls");
        return ;
    }
    else {
        int nim;
        cout << "masukkan NIM:";
        cin >> nim;
        node* currentNode = start;
        while (currentNode ! = NULL){
            if (currentNode->noMhs == nim){
                cout << "NIM:" << currentNode - > noMhs << ", nama: " << currentNode -> name << endl;
                return;
            }
            currentNode= currentNode -> next;
        }
        cout << "data tidak ditemumkan" << endl;
    }
}
int main(){
    int pilihan;
    do{
        try{
            cout << "1. Tambah Data" << endl;
            cout << "2. Hapus Data" << endl;
            cout << "3. Tampilkan Data" << endl;
            cout << "4. Cari Data" << endl;
            cout << "5. Keluar" << endl;
            cout << "Pilihan: ";
            cin >> pilihan;
            switch (pilihan){
                case 1:
                addNode ();
                cout << "data berhasil ditambahkan" << endl;
                system ("pause");
                system  ("cls");
                break;
                case  2:
                if (listEmpty()){
                    cout << "list kosong" << endl;
                    system ("pause");
                    system( "cls");
                    break;
                }
                int nim;
                cout << "masukkan NIM:";
                cin >>  nim;
                if (deleteNode (nim)) {
                    cout << "nim:" << nim << "berhasil dihapus" << endl;
                    system ("pause");
                    system ("cls")
                }
                else 
                cout << "data tidak ditemukan" << endl;
                break;
                case 3:
                traverse();
                case 4:
                searchData();
                break;
                case 5:
                break;
                default:
                cout << "pilihan tidak ada" << endl;
                break;
            }
        }
        catch (exception e){
            cout << "terjadi kesalahan" << endl;
        }
        while (pilihan ! = 5);
    }


}