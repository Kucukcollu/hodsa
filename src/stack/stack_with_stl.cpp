#include <iostream>
#include <stack> 

/* 
    Object
    std::stack<string> object;

    Methods
    -> object.push():      adds element to stack
    -> object.size():      return the size of the stack
    -> object.pop():       removes the last element
    -> object.top():       returns the last element
    -> object.empty():     return boolean state of stack as empty or not
    -> object.swap():      changes stacks with each other
    -> object.emplace():   adds element and revert the stack
*/

using namespace std;

int main()
{
    // Create a stack object
    stack<string> cities_europe;

    // Add some elements to stack
    cities_europe.push("Istanbul");
    cities_europe.push("Paris");
    cities_europe.push("Tokyo");

    // Size of the stack
    cout << "Size of the stack: " << cities_europe.size() << endl;

    // Top of the stack
    cout << "Top element: " << cities_europe.top() << endl;

    // Delete from the last element
    cities_europe.pop();

    cout << "Top element: " << cities_europe.top() << endl;

    // Flag for empty stack
    bool check;
    check = cities_europe.empty();
    
    if(check)
    {
        cout << "The stack is empty." << endl;
    }
    else
    {
        cout << "The stack is not empty." << endl;
    }

    // Create another stack to use swap method of stack
    stack<string> cities_asia;

    cities_asia.push("Tokyo");
    cities_asia.push("Pekin");
    cities_asia.push("Seul");
    cities_asia.push("Wuhan");

    // Call the swap method of the stack object and pass the other swap object
    cities_europe.swap(cities_asia);

    // Print the stacks
    cout << "Asia(Europe) cities: " << endl;
    while(!cities_asia.empty())
    {
        cout << cities_asia.top() << endl;
        cities_asia.pop();
    }

    cout << "Europe(Asia) cities: " << endl;
    while(!cities_europe.empty())
    {
        cout << cities_europe.top() << endl;
        cities_europe.pop();
    }

    // Create a swap object to revert
    stack<int> numbers;

    numbers.push(0);
    numbers.push(2);
    numbers.push(4);
    numbers.push(6);
 
    // Adds 8 and revert the whole stack
    numbers.emplace(8);

    while(!numbers.empty())
    {
        cout << numbers.top() << endl;
        numbers.pop();
    }

    return 0;
}