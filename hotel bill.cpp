#include<iostream>
using namespace std;
void desgin_of_bill(char name[40],char date[20]){
    cout<<("\n\n")<<endl;
    cout<<("\t  GREAT OBSERVER RESTURAN CLUB    ")<<endl;
    cout<<("\n\t-------------------------------------------\n");
    cout<<"DATA:  "<<date<<endl;
    cout<<"Invoice To: "<<name<<endl;
    cout<<"\n";
    cout<<"--------------------------------------------------------------------\n";
    cout<<"items\t\t\t";
    cout<<"Qty\t\t\t";
    cout<<"price\t\t\t";
    cout<<"\n-------------------------------------------------------------------\n";
    cout<<"\n\n"<<endl;

}
void print_in_Bill(char item[40], int qty, float price){
    cout<<item<<"\t";
    cout<<"\t\t"<<qty<<"\t";
    cout<<"\t\t"<<qty*price<<"\t";
    cout<<"\n"<<endl;
    



}
void calculate_Bill(float total){
    cout<<"\n";
    cout<<"============================================================================"<<endl;
    cout<<"Total Amount: \t\t\t\t\t"<<total;


}
struct resturant
{
    /* data */
    char name[50];
    char date[20];
    char item[40];
    int take_no_of_item;
    int unit_charge_of_item;
    int qty;

};

int main(){
    float total;
    int m;
    struct resturant r1[50];
    cout<<"\nEnter The Date: ";
    cin>>r1->date;
    cout<<"\nEnter the Custumer Name: ";
    cin>>r1->name;
    cout<<"\nEnter the number of order as request of Custumer:  \t";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cout<<"\nEnter  "<<i+1<<"item: \t";
        cin>>r1[i].item;
        cout<<"Enter Quantity of item:  \t";
        cin>>r1[i].take_no_of_item;
        cout<<"Enter per unit charge of item: ";
        cin>>r1[i].unit_charge_of_item;
        total += r1[i].take_no_of_item*r1[i].unit_charge_of_item;


    }
    desgin_of_bill(r1->name,r1->date);
    for (int i = 0; i < m; i++)
    {
        print_in_Bill(r1[i].item, r1[i].take_no_of_item,r1[i].unit_charge_of_item);

    }
    calculate_Bill(total);
    cout<<"\n";
    cout<<"=============================================================================\n"<<endl;
    cout<<"\t***************************** THANKU ********************************"<<endl;
    cout<<"\n";
    return 0;
}