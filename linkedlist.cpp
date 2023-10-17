#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

class linked_list
{
    struct node *head;

   public: 
   void add_node_beg()
    {
        struct node *newnode;
        int x;
        newnode = (struct node*)malloc(sizeof(struct node));
        cout << "enter data for the new node : ";
        cin >> x;
        newnode -> data = x;
        newnode -> next = NULL;


        newnode -> next = head;            // to make the current node into an preceding node's 
        head = newnode;                    // to break the link of head and attach it with the newnode
    }
    
    void del_node_end()
    {
        struct node *temp = head;
        if(head == NULL) return; 
        head = head -> next
        free(temp);
    }

    add_node_end()
    {
        struct node *newnode, *temp;
        int x;
        if(head==NULL)
        {
            add_node_beg();
            return;
        }
        newnode = (struct node *)
        malloc(sizeof(struct node));
        cout << "enter data for the new node : ";
        cin >> x;
        newnode ->data = x;
        newnode ->next = NULL;
        temp = head;
        while(temp -> next != NULL)
        {
            temp = temp ->next;
            temp ->next = newnode; 
        }
    }
    del_node_end()
    {
        
    }
    void display_all()
    {
        struct node *temp;
        temp = head; 
        while(temp!=NULL)
        {
            cout << temp ->data <<"->";
            temp = temp ->next;
        }
        cout << "NULL" <<endl;    
    }

};
linked_list myList;

main()
{
    int choice;
    cout << "1)Add in beginning \n 2)Delete form beginning\n 3)Add in end\n 4)Delete from end\n5)Display all/n6)\n Your choice: " << endl;
    while (1)               // while the option chose is valid
    {
        cin >> choice; 
        switch(choice)
        { 
            case 1:
                myList.add_node_beg();
            break;

            case 2:
                myList.del_node_end();
            break;    

            case 5:
                myList.display_all();
            break;

            case 6:
                exit(-1);   

        }
    }
/*creating a menu containing options of functions*/
}
