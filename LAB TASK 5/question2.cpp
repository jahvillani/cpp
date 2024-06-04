#include <iostream>
#include <random>
using namespace std;

int main() {
    
    int daysUntilExpiration = rand() % 12;
    cout<<"Random days until expiration: " <<daysUntilExpiration<<endl;

    switch(daysUntilExpiration){
        case 0:
        cout<<"Your subscription has expired."<<endl;
        break;
        case 1:
        cout<<"Your subscription expires within a day! Renew and save 20% !" <<endl;
        break;
        case 2 ... 5:
        cout<<"Your subscription expires in " << daysUntilExpiration <<" days Renew now and save 10%! "<<endl;
        break;
        case 6 ... 10:
        cout<<"Your subscription will expire soon Renew now!"<<endl;
        break;
        default:
        cout<<"You have an active subscription!"<<endl;
        break;
    }
    return 0;

    }
