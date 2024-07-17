/**
 * file:        insertionSort.h
 * author:      Liam Fitting
 * date:        2/20/2024
 * description: Implementation of Insertion sort.
 */

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "sort.h"

class InsertionSort : public Sort{

    public:
        InsertionSort(){
            name = "Insertion Sort";
        }

        void doSort(std::vector<int> &vec) {
            // TODO: Implement insertion sort
          int key;
          int j;
          int i;
          for( i = 1; i < vec.size(); i++){
            key = vec[i];
            j = i - 1;
            while(j >= 0  && vec[j] > key) { // while loop helps improve big omega time. still an O(n^2) sort.
              vec[j + 1] = vec[j];
              j = j - 1;
            }
            vec[j + 1] = key;
          }

        }

    //feel free to add additional functions as needed
};

#endif
