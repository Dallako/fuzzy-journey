#include <iostream>

using namespace std;

int ziemniaki, odbiorcy, zostalo, po_ile;
int main()
{
    cout << "How many potatoes are to be given: ";
    cin >> ziemniaki;
    cout << endl << "How many starving ukrainians are there: ";
    cin >> odbiorcy;

    po_ile = ziemniaki/odbiorcy;
    if(po_ile>1)
    {
        cout << "Each shall recive " << po_ile << " potatoes"<<endl;
    }
    else if (po_ile==1)
    {
        cout << "Each shall recive one potato."<<endl;
    }
    else
    {
        cout<<"They won't recive any potatoes today"<<endl;
    }
    zostalo = ziemniaki - (po_ile*odbiorcy);
    if(zostalo==1)
    {
        cout<<"There will be one potato left for tomorrow"<<endl;
    }
    else
    {
        cout << "There will be "<<zostalo<<" potatoes left for tomorrow.";
    }
    return 0;
}
