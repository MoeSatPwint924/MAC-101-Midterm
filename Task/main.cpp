#include <iostream>  
#include <string>   
using namespace std; 

int main() {
    
    
    string bakerName;     // stores the name the user types in
    int categoryChoice;   // stores the number (1 or 2) for the baking category
    string subChoice;     // stores the next decision made by the user (like high/low or mango/berry)

    // Printing the title of the game for the player to see
    cout << "   GRAND PASTRY CHAMPIONSHIP FINALS      " << endl;
    cout << "=========================================" << endl;
    cout << "Welcome to the ultimate kitchen showdown!" << endl;
    
    // Asking the user for their name
    cout << "What should I call you, Chef? (Enter your name): ";
    
    // Reading what the user typed on the keyboard and saving it into my bakerName variable
    cin >> bakerName;

    // user personally using the name they just entered
    cout << "\nHello, Chef " << bakerName << "! The judges are waiting for your masterpiece." << endl;
    cout << "Please choose your baking category:" << endl;
    cout << "1. Artisan Chocolate Cake" << endl;
    cout << "2. Tropical Fruit Tart" << endl;
    cout << "Enter your choice number (1 or 2): ";
    
    // Saving the category number chosen by the user
    cin >> categoryChoice;

    // If the user chooses category 1, run this code
    if (categoryChoice == 1) {
        cout << "\nYou selected the Artisan Chocolate Cake category!" << endl;
        cout << "The oven temperature is very tricky. Do you want to set it to HIGH heat for a fast bake or LOW heat for a slow melt?" << endl;
        cout << "Type your choice (high or low): ";
        cin >> subChoice;

        // Nested if-else: Checking the sub-choice inside category 1
        if (subChoice == "high" || subChoice == "HIGH" || subChoice == "High") {
            cout << "\n Oh no! The high heat burned the edges of your cake!" << endl;
            cout << " Result: You got disqualified for a burnt crust. Better luck next time!" << endl;
        } 
        else if (subChoice == "low" || subChoice == "LOW" || subChoice == "Low") {
            cout << "\n Absolute perfection! The chocolate melted smoothly and the texture is heavenly." << endl;
            cout << " Result: The judges loved it! You won 1st Place and the Golden Whisk Trophy!" << endl;
        } 
        else {
            // This code is for any random spelling or wrong words typed by the user
            cout << "\n Invalid input! " << endl;
        }
    } 
    // If the user didn't pick 1, but chose category 2, run this code
    else if (categoryChoice == 2) {
        cout << "\nYou selected the Tropical Fruit Tart category!" << endl;
        cout << "You need to add a glaze on top. Do you want to use [MANGO] glaze or [BERRY] glaze?" << endl;
        cout << "Type your choice (mango or berry): ";
        cin >> subChoice;

        // the other choice inside category 2
        if (subChoice == "mango" || subChoice == "MANGO" || subChoice == "Mango") {
            cout << "\n The sweet and tangy mango glaze pairs wonderfully with the fresh custard!" << endl;
            cout << " Result: The judges praise your creativity. You won the championship!" << endl;
        } 
        else if (subChoice == "berry" || subChoice == "BERRY" || subChoice == "Berry") {
            cout << "\n The berry glaze is a bit too sour." << endl;
            cout << " Result: You placed 3rd. Good effort, but no grand prize!" << endl;
        } 
        else {
            //invalid words for category 2
            cout << "\n Invalid input!" << endl;
        }
    } 
    // If the user types a number other than 1 or 2 like 5 or 9, catch it here
    else {
        cout << "\n Invalid category number!" << endl;
    }

    // Ending screen for the game
    cout << "\n=========================================" << endl;
    cout << "           COMPETITION FINISHED          " << endl;
    
    return 0;
}
