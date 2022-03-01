#include <iostream>
#include <queue>

/* 
    Object
    std::priority_queue<int> object;

    Methods
    -> object.push():      adds element to priority_queue
    -> object.size():      return the size of the priority_queue
    -> object.pop():       removes the highest priority element
    -> object.top():       returns the highest priority element
    -> object.empty():     return boolean state of priority_queue is empty or not
    -> object.swap():      changes priority_queue with each other
    -> object.emplace():   adds element and revert the priority_queue
*/

using namespace std;

int main()
{
    // Create a priority_queue object
    priority_queue<int> random_numbers;

    // Add some elements to priority_queue
    random_numbers.push(7);
    random_numbers.push(3);
    random_numbers.push(0);
    random_numbers.push(16);
    random_numbers.push(-4);

    // Size of the priority_queue
    cout << "Size: " << random_numbers.size() << endl;

    int size = random_numbers.size();

    // By default, C++ creates a max-heap for priority queue.
    // 16 7 3 0 -4

    // Basicly printing the priority queue
    for(int i=0;i<size;i++)
    {
        // Highest priority element
        cout << random_numbers.top() << " ";
        // Elimination of the highest priority element
        random_numbers.pop();
    }

    cout << endl;

    if(!random_numbers.empty())
    {
        cout << "Priority queue is not empty." << endl;
    }
    else
    {
        cout << "Priority queue is empty." << endl;
    }

    // Min heap for priority queue
    priority_queue<int, vector<int>, greater<int>> mini_numbers;

    mini_numbers.push(7);
    mini_numbers.push(4);
    mini_numbers.push(6);
    mini_numbers.push(2);
    mini_numbers.push(9);
    mini_numbers.push(0);
    mini_numbers.push(1);

    int sizeof_mini_numbers = mini_numbers.size();

    for(int i=0;i<sizeof_mini_numbers;i++)
    {
        cout << mini_numbers.top() << " ";
        mini_numbers.pop();
    }

    cout << endl;

    // min-heap alternative which is easy to use
    priority_queue<int> my_numbers;

    my_numbers.push(-1);
    my_numbers.push(2);
    my_numbers.push(8);
    my_numbers.push(6);

    // expected output: -1 2 6 8
    int sizeof_my_numbers = my_numbers.size();

    priority_queue<int> empty;

    for(int i=0;i<sizeof_my_numbers;i++)
    {   
        //my_numbers.top() = my_numbers.top()*(-1);
        empty.push(my_numbers.top()*-1);
        my_numbers.pop();
    }
    
    int empty_size = empty.size();

    for(int i=0;i<empty_size;i++)
    {   
        cout << empty.top()*-1 << " ";
        empty.pop();
    }
    
    cout << endl;

    priority_queue<int> id;

    id.push(214);
    id.push(654);
    id.push(911);
    id.push(446);

    int sizeof_names = id.size();

    priority_queue<int> notes;

    notes.push(40);
    notes.push(50);
    notes.push(30);

    notes.emplace(60);

    int sizeof_notes = notes.size();

    // Swap two priority queue with each other
    id.swap(notes);

    cout << "Notes(id): " << endl;
    for(int i=0;i<sizeof_names;i++)
    {
        cout << id.top() << " ";
        id.pop();
    }

    cout << endl;

    cout << "ID(notes): " << endl;
    for(int i=0;i<sizeof_notes;i++)
    {
        cout << notes.top() << " ";
        notes.pop();
    }

    return 0;
}