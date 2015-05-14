#include<iostream>
#include<cstring>
using namespace std;
class footballer_characteristics
{
private:
    static const int cap = 50;
    static const int fam = 34;
    int age;
    double speed = 0;
    double price;
    //char position[cap] = {'Goalkeeper','Defender','Half-back','Striker'};
    //char rang[fam] = {'A group','B group','V group'};
    int precisionstrike = 0;
    double weight;
    double height;
public:
void Choose(double price1,double weight1,double height1)
{
    weight = weight1;
    height = height1;
    price = price1;
    do
    {
        price-=1000;
        speed+=2;
        precisionstrike+=5;
    }
        while(price > 0);
        if (price == 0)
        {
            if (speed > 30 && precisionstrike > 60)
            {
                cout<<"A group"<<endl;
                cout<<"Speed: "<<speed<<endl;
                cout<<"Precisionstrike: "<<precisionstrike<<endl;
                cout<<"weight: "<<weight<<endl;
                cout<<"height: "<<height;
            }
            else
                cout<<"B group"<<endl;
                cout<<"Speed: "<<speed<<endl;
                cout<<"Precisionstrike: "<<precisionstrike<<endl;
                cout<<"weight: "<<weight<<endl;
                cout<<"height: "<<height;
        }
}
};
int main()
{
    footballer_characteristics Tim;
    //Tim.set_price();
    Tim.Choose(10000,78.5,1.90);

}
