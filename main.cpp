//Brian Herrera
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> list; 
        int numItems = 0;
        char input;
        string item;
        int ItemList;
        

        do
        {

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if ((input == 'a' || input == 'A') ) //starts adding item
                {
                        cout<<"What is the item?\n";
                        cin >> item;
                        list.push_back(item);              
                          
                        
                }
                if(input != 'a' && input != 'A' && input != 'q' && input != 'Q') //incase they dont enter a valid option 
                {
                    cout<<"this is not a option";
                }

        }while(input != 'q' && input != 'Q'); //quit
        if(list.empty() == false )
        {
            cout<<"==ITEMS TO BUY==\n";
        }
        if(list.empty() ==true )
        {
            cout<<"you have no grocery list"<<endl;
        }
        for(ItemList = 0; ItemList< list.size(); ItemList++)
        {

                cout<<list[ItemList]<<endl;

        }

        return 0;
}
