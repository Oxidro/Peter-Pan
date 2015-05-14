#include<iostream>
#include<cstring>
using namespace std;
class footballer_characteristics
{
private:
    static const int cap = 50;
    static const int fam = 34;
    int age;
    double speed;
    double price;
    char position[cap] = {'Goalkeeper','Defender','Half-back','Striker'};
    char rang[fam] = {'A group','B group','V group'};
    int precisionstrike;
    double weight;
    double height;
public:
void set_age(){cin>>age;}
void set_speed(){cin>>speed;}
void set_price(){cin>>price;}
void set_precisionstrike(){cin>>precisionstrike;}
void set_weight(){cin>>weight;}
void set_height(){cin>>height;}
void bestchoice()
};
int main()
{
    footballer_characteristics Tim;
    //Tim.set_price();
    Tim.bestchoice();

}
