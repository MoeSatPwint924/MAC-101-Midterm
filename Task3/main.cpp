#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string bakerName;     
    int categoryChoice;   
    string subChoice;     

    cout << "   GRAND PASTRY CHAMPIONSHIP FINALS      " << endl;
    cout << "=========================================" << endl;
    cout << "Welcome to the ultimate kitchen showdown!" << endl;
    cout << "What is your baker name? ";
    cin >> bakerName;

    cout << "\nHello, Chef " << bakerName << "! The judges are waiting." << endl;
    cout << "Choose your baking category:" << endl;
    cout << "1. Artisan Chocolate Cake" << endl;
    cout << "2. Tropical Fruit Tart" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> categoryChoice; // Saves the number entered into categoryChoice

    if (categoryChoice == 1) {
        cout << "\nYou chose to bake an Artisan Chocolate Cake!" << endl;
        cout << "The oven temperature is tricky. Do you want to set it to [HIGH] heat for a quick bake or [LOW] heat for a slow melt?" << endl;
        cout << "Your choice (high/low): ";
        cin >> subChoice;

        if (subChoice == "high" || subChoice == "HIGH" || subChoice == "High") {
            cout << "\n Oh no! The high heat burned the edges of the cake!" << endl;
            cout << " Result: Disqualified for a burnt crust. Better luck next time!" << endl;
        } 
        else if (subChoice == "low" || subChoice == "LOW" || subChoice == "Low") {
            cout << "\n Absolute perfection! The chocolate melted smoothly and the texture is heavenly." << endl;
            cout << " Result: You won 1st Place and the Golden Whisk Trophy! You Win!" << endl;
        } 
        else {
            // Catches any unexpected or invalid text typed by the user.
            cout << "\n Invalid input! You stared at the oven too long and the batter over-frothed. Disqualified!" << endl;
        }
    } 
    else if (categoryChoice == 2) {
        cout << "\nYou chose to bake a Tropical Fruit Tart!" << endl;
        cout << "You need to select your glaze. Do you want to use [MANGO] glaze or [BERRY] glaze?" << endl;
        cout << "Your choice (mango/berry): ";
        cin >> subChoice;

        if (subChoice == "mango" || subChoice == "MANGO" || subChoice == "Mango") {
            cout << "\n The sweet and tangy mango glaze pairs wonderfully with the custard!" << endl;
            cout << " Result: The judges praise your creativity. You won the championship! You Win!" << endl;
        } 
        else if (subChoice == "berry" || subChoice == "BERRY" || subChoice == "Berry") {
            cout << "\n The berry glaze is a bit too tart and overpowers the delicate crust." << endl;
            cout << " Result: You placed 3rd. Good effort, but no trophy!" << endl;
        } 
        else {
            cout << "\n Invalid input! You forgot to add any glaze at all. The tart is dry and plain. Disqualified!" << endl;
        }
    } 
    // else clause: Catches any invalid number like 3, 5, 9 if the user didn't pick 1 or 2.
    else {
        cout << "\n Invalid category number selected! You missed the registration deadline and couldn't compete." << endl;
    }

    cout << "\n=========================================" << endl;
    cout << "            COMPETITION OVER             " << endl;
   
    return 0;
}
