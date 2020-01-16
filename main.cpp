#include <iostream>

using namespace std;

int main(){

    float mealPrice = 44.5;
    const float TIP_COST = .15;
    const float TAX_COST = .0675;

    cout << "Meal Cost : " << mealPrice << endl;

    cout << "Meal Tip: " << mealPrice * TIP_COST << endl;
    cout << "Meal Tax: " << mealPrice * TAX_COST << endl;


    return 0;
}