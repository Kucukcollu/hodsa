#include <iostream>
#include <vector>

using namespace std;

class PriorityQueue
{
    public:
        vector<int> inputs;
        int size;
        int largest;

        void swap(int *a,int*b)
        {
            int temp = *b;
            *b = *a;
            *a = temp;
        }

        void heapify(vector<int> &vec, int i)
        {
            size = vec.size();
            largest = i;

            int left_side = 2*i+1;
            int right_side = 2*i+2;

            if(left_side < size && vec[left_side]>vec[largest])
            {
                largest = left_side;
            }
            
            if(right_side < size && vec[right_side]>vec[largest])
            {
                largest = right_side;
            }

            if(largest!=i)
            {
                swap(&vec[i],&vec[largest]);
                heapify(vec,largest);
            }
        }

        void insert(vector<int> &vec, int input)
        {
            size = vec.size();
            if(size == 0)
            {
                vec.push_back(input);
            }
            else
            {
                vec.push_back(input);
                for(int i=size/2-1;i>=0;i--)
                {
                    heapify(vec,i);
                }
            }
        }

        void delete_node(vector<int> &vec, int input)
        {
            size = vec.size();
            int i;
            for(i =0;i<size;i++)
            {
                if(vec[i]==input)
                {
                    break;
                }
            }

            swap(&vec[i],&vec[size-1]);
            vec.pop_back();

            for(int i=size/2-1;i>=0;i--)
            {
                heapify(vec,i);
            }
        }

        void print(vector<int> &vec)
        {
            for(int i=0;i<vec.size();i++)
            {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
};

int main()
{
    PriorityQueue pq;

    vector<int> ht;

    pq.insert(ht,3);
    pq.insert(ht,9);
    pq.insert(ht,2);
    pq.insert(ht,1);
    pq.insert(ht,4);
    pq.insert(ht,5);

    pq.print(ht);

    pq.delete_node(ht,4);

    pq.print(ht);

    return 0;
}