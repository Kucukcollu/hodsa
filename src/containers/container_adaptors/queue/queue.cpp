#include <iostream>
#include <queue>

/* 
    Object
    std::queue<std::string> object;

    Methods
    -> object.push():      adds element to queue
    -> object.size():      return the size of the queue
    -> object.pop():       removes the last element
    -> object.front():     returns the first element
    -> object.back():      returns the last element
    -> object.empty():     return boolean state of queue is empty or not
    -> object.swap():      changes queues with each other
    -> object.emplace():   adds element and revert the queue
*/

using namespace std;

int main()
{
    // Create a queue object
    queue<string> physicists;

    // Add some elements to queue
    physicists.push("Newton");
    physicists.push("Einstein");
    physicists.push("Feynman");

    // First element of the queue
    cout << "First element: " << physicists.front() << endl;

    // Elemination of the first added element
    physicists.pop();

    cout << "First element: " << physicists.front() << endl;

    // Size of the queue
    cout << "Size of the queue: " << physicists.size() << endl;

    // Last element of the queue
    cout << "Last element: " << physicists.back() << endl;

    queue<string> mathematicians;

    mathematicians.push("Pisagor");
    mathematicians.push("Fibonacci");
    mathematicians.push("Leibniz");
    mathematicians.push("Euler");
    mathematicians.push("Gauss");

    // Swap mathematicians and physicists
    mathematicians.swap(physicists);

    // Basic printing of the queues
    cout << "---Mathematicians(Physicists)--" << endl;
    while(!mathematicians.empty())
    {
        cout << mathematicians.front() << endl;
        mathematicians.pop();
    }

    cout << "---Physicists(Mathematicians)--" << endl;
    while(!physicists.empty())
    {
        cout << physicists.front() << endl;
        physicists.pop();
    }

    queue<int> odd_numbers;
    
    odd_numbers.push(1);
    odd_numbers.push(3);
    odd_numbers.push(5);
    odd_numbers.push(7);
    /*
    -------------
        7 5 3 1
    -------------
    */
    
    // Add 9 and reverse the queue
    odd_numbers.emplace(9);

    /*
    -------------
        1 3 5 7 9
    -------------
    */

    cout << "Odd numbers in reverse form: " << endl;
    while(!odd_numbers.empty())
    {
        cout << odd_numbers.front() << endl;
        odd_numbers.pop();
    }

    return 0;
}
