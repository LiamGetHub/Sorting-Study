/**
 * file:        selectionSort.h
 * author:      Liam Fitting
 * date:        2/20/24
 * description: implementation of selection sort
 */

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sort.h"

class SelectionSort : public Sort{

    public:
        SelectionSort(){
            name = "Selection Sort";
        }
        void doSwap(int &a, int &b) {
          int temp = a;
          a = b;
          b = temp;
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement selection sort
            //find smallest element
              // swap
              //repeat
            int minIndex;
            int minValue;
              for( int i = 0; i < (vec.size() - 1); i++) {
                minIndex = i;
                minValue = vec[i];
                for (int j = i + 1; j < vec.size(); j++){
                  if (vec[j] < minValue) {
                    minValue = vec[j];
                    minIndex = j;
                  }
                }
                doSwap(vec[minIndex], vec[i]);
              }
          
           
    
        //Feel Free to add additional functions as needed
        }
};
#endif
