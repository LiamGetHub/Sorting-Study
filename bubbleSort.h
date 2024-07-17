/**
 * file:        bubbleSort.h
 * author:      Liam Fitting
 * date:        2/20/2024
 * description: Implementation of Bubble sort.
 */

#include "sort.h"

class BubbleSort : public Sort{

    public:
        BubbleSort(){
            name = "Bubble Sort";
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement bubble sort here
          for (int i = 0; i < vec.size() - 1; i++) {
              for (int j = 0; j < vec.size() - i - 1; j++) {
                  if (vec[j] > vec[j + 1]) {
                      doSwap(vec[j], vec[j + 1]);
                  }
              }
          }
            
        }

        void doSwap(int &a, int &b){
            int temp;
            temp = b; //a stored
            b = a;
            a = temp;

        }

        //Feel Free to add additional functions as needed



};
