//Task 1 – Binary search tree
//Implement the class for a binary search tree.Keys of tree nodes should be simple integer numbers.Your class should provide the following public operations(the prototypes are written in C# but you may transfer them to any language) :
//
//    void Add(int key) – adds element to the tree.
//    void Print() – prints all elements in the tree in a sorted order.
//    Boolean Search(int key) – returns true if the given key is inside the tree and false otherwise.
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


struct node
{
    int info;
    node* l, * r;
};

node* tree = NULL;

/*ADD ITEM TO TREE*/
void push(int a, node** t)
{
    if ((*t) == NULL)
    {
        (*t) = new node; 
        (*t)->info = a;        
        (*t)->l = (*t)->r = NULL;      
        return;                     
    }

    if (a > (*t)->info) push(a, &(*t)->r);
    else push(a, &(*t)->l);
}


/*PRINT TREE IN CONSOLE*/
void print(node* t, int u)
{
    if (t == NULL) return;                  
    else                                  
    {
        print(t->l, ++u);                  
        for (int i = 0; i < u; ++i)
        {
            cout << "|";
        }
        cout << t->info << endl;        
        u--;
    }
    print(t->r, ++u);                 
}


/*SEARCH ITEM IN TREE*/
bool search(node* t, int key)
{

    if (t->info == key) {
        return true;
    }

    if (t->l != NULL) {
        bool val = search(t->l, key);
        if (val) {
            return val;
        }
    }

    if (t->r != NULL) {
        bool val = search(t->r, key);
        if (val) {
            return val;
        }
    }

    return false;
}

/*CASE SELECTION FUNCTION*/
int choose_case(float mark)
{
    int mark_key;
    if (mark == 1)
        mark_key = 1;
    else if (mark == 2)
        mark_key = 2;
    else if (mark == 3)
        mark_key = 3;
    else if (mark == 4)
        mark_key = 4;

    return mark_key;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int mark;
    int a;
    do
    {
       
        cout << "|---------------------------------------|" << endl;
        cout << "|Select a menu item:		    	|\n| 1 - Add item in tree                  |\n| 2 - Îutput of a tree in the console   |\n| 3 - Finding a node in a tree          |\n| 4 - Exite				|\n";
        cout << "|_______________________________________|" << endl;
        cin >> mark;

        switch (choose_case(mark))
        {
        case 1:
        {
            int n;                             
            int s;                              
            cout << "Enter the number of items  ";
            cin >> n;                          
            for (int i = 0; i < n; ++i)
            {
                cout << "Input number: ";
                cin >> s;                       

                push(s, &tree);                 
            }
            cout << "Numbers transferred successfully!" << endl;

            system("pause");
            system("cls");
            a = 0;
            break;
        }

        case 2:
        {
            cout << "\n";
            cout << "Your tree:\n";
            print(tree, 0);

            system("pause");
            system("cls");
            a = 0;
            break;

        }
        case 3:
        {
            int key;
            cout << "What you want fiind of node? - ";
            cin >> key;
            int intKey = int(key);

            bool exist = search(tree, intKey);
            if (exist == true)
            {
                cout << "The node exists\n";
            }
            else
            {
                cout << "The node does not exist\n";
            }

            system("pause");
            system("cls");
            a = 0;
            break;

        }
        case 4:
        {
            a = 2;
        }
        default:
            break;
        }
    } while (a == 1 || a == 0);

    return 0;
}