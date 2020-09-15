/*Jessica Graff
  Z1862418
  CSCI 340 Section 2

  I certify that this is my own work and where appropriate an extension
  of the starter code provided for the assignment.
*/

#include "rgi.h"

using namespace std;
using std::vector;

const int LOW = 1;
const int HIGH = 10000;
const int VEC_SIZE = 200;
const int SEED = 1;
const int NO_ITEMS = 12;
const int ITEM_W = 5;

void genRndNums(vector<int> & v)
{
    srand(SEED);
    for (int i = 0; i < VEC_SIZE; i++)
    {
        v.push_back(rand() % ((HIGH - LOW) + 1) + LOW);
    }

}

void printVec(const vector<int> &v)
{
    for(int i = 0; i < VEC_SIZE; i++)
    {
        if (i % NO_ITEMS == 0 && i != 0)
        {
            cout << endl;
        }
        cout << right << setw(ITEM_W) << v.at(i) << " ";
    }
}

int main() 
{
// Declare vector v
    vector<int> v;
// Generate random numbers to fill vector v	
    genRndNums(v);
// Using STL sort sort v
	sort(v.begin(), v.end());
// Print vector of sorted random numbers
    printVec(v);
    return 1;
}
