#include<iostream>

using namespace std; 

//Function Prototypes: Gives edge to define structure of the Function without defining above Main Function.
int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);
int Division(int a, int b);

int main(){
    int n1, n2, choice; 

    cout << "Enter First Number: ";
    cin >> n1; 

    cout << "Enter Second Number: ";
    cin >> n2;

    cout << "Enter Operation: ";
    cin >> choice; 
    
    switch(choice){

        case 1: 
        cout << "Addition: " << Addition(n1, n2);
        break; 

        case 2: 
        cout << "Subtraction: " << Subtraction(n1, n2);
        break;

        case 3: 
        cout << "Multiplication: " << Multiplication(n1, n2);
        break;

        case 4: 
        cout << "Division: " <<Division(n1, n2);
        break;

        default: 
        cout << "Please Enter a Valid Selection to Perform!!";
        break; 
    }

return 0; 
}

//Function for Addition
int Addition(int a, int b){
    int sum = 0; 
    sum = a + b; 
    return sum; 
}
//Function for Subtraction
int Subtraction(int a, int b){
    int sum = 0; 
    sum = a - b; 
    return sum; 
}
//Function for Multiplication
int Multiplication(int a, int b){
    int sum = 0; 
    sum = a * b; 
    return sum; 
}
//Function for Division
int Division(int a, int b){
    int sum = 0; 
    sum = a / b; 
    return sum; 
}
