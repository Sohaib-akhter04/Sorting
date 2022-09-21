#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER OF TERMS.";
    cin>>n;
    int * ptr=NULL;
    ptr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i); // collecting the numbers.
    }
    for(int i=1;i<n;i++) // i is 1 because we go backward after selecting a term
    {
        int current=*(ptr+i); // selecting current term for which insertion sort is currently running,
        int j=i-1; // pointing the previous element for comparison.
        while(*(ptr+j)>current && j>=0) // checking whether the current element is less than the previous one until we found the position where it belongs
        {
            *(ptr+j+1)=*(ptr+j);
            j--; // j will be decremented so will access it in the end by adding 1.
        }
        // cout<<j;
        *(ptr+j+1)=current;
    }
    cout<<"THE SORTED ORDER IS"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;
    }
}