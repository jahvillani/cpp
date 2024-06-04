#include <iostream>
#include <random>
using namespace std;

int main() {


int daysUntilExpiration = rand() % 12;
cout<<"Random days until expiration : " << daysUntilExpiration <<endl;


if(daysUntilExpiration <= 10 && daysUntilExpiration > 5)
{
    cout<<"Your subscrption will expire soon. Renew Now!";
}
else if(daysUntilExpiration <= 5 && daysUntilExpiration >= 2) {
    cout<<"Your subscription expires in " << daysUntilExpiration <<endl <<" days. Renew now and save 10%";
} 
else if (daysUntilExpiration == 1){
    cout<<"Your subscription expires within a day" <<endl<<"Renew now and save 20%";
}
else if(daysUntilExpiration == 0){
    cout<<"Your subscription has expired";
}
else{
    cout<<"You have an active subscription";
} 
    

    return 0;
}

    

