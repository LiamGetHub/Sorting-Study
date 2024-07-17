/**
 * file:        bubblesort_optimized.h
 * author:      Liam Fitting
 * date:        2/20/24
 * description: Inplementation of bubble sort with clean pass.
 */

#include "sort.h"
using namespace std;

class BubbleSortOptimized : public Sort{

    public:
        BubbleSortOptimized(){
            name = "Bubble Sort (Optimized)";
        }
        void doSwap(int &a, int &b){
            int temp;
            temp = b; //a stored
            b = a;
            a = temp;

        }
        void doSort(std::vector<int> &vec) {
            // TODO: Implement Optimized bubble sort here
          bool swapped;
          for (int i = 0; i < vec.size() - 1; i++) {
              swapped = false;
              for (int j = 0; j < vec.size() - i - 1; j++) {
                  if (vec[j] > vec[j + 1]) {
                      swap(vec[j], vec[j + 1]);
                      swapped = true;
                  }
              }
          
              // If no two elements were swapped by inner loop, then break
            if (swapped == false)
                 break;
              }
        }
        //Feel Free to add additional functions as needed



};
