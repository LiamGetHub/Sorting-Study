/**
 * file:        quicksort.h
 * author:      Liam Fitting
 * date:        2/20/24
 * description: implementation of quicksort sort
 */

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "sort.h"

class QuickSort : public Sort{

    public:
        QuickSort(){
            name = "Quick Sort";
        }
        void doSwap(int &a, int &b) {
          int temp = a;
          a = b;
          b = temp;
        }
int findMedian(std::vector<int> vec, int first, int last) {
  int middle = (first+last)/2;
  if(vec[first] > vec[middle]){
    doSwap(vec[first],vec[middle]);
  }
  if (vec[first] > vec[last]) {
    doSwap(vec[first],vec[last]);
  }
  if(vec[middle] >vec[last]) {
    doSwap(vec[middle], vec[last]);
  }
  return middle;
}
      int randomPivot(std::vector<int> vec, int first, int last){
        srand(time(0));
        //(rand() % (ub - lb + 1)) + lb; 
        int randNum;
        randNum = (rand() % (last - first + 1)) + first;

        return randNum; // returns random pivot
      }
        int partition(int first, int last, std::vector<int> &vec) {
          //int middle = (first+last)/2;
          // int pivIndex = findMedian(vec, first, last);
          //int pivVal = vec[pivIndex];
          //int pivIndex = randomPivot(vec, first, last);
          //int pivVal = vec[pivIndex];

          int pivIndex = (first);
          int pivVal = vec[pivIndex];

          doSwap(vec[pivIndex], vec[last]);

            int i = (first);
            for (int j = first; j < last; j++) { // increment throught he vector
              if (vec[j] < pivVal) {
                doSwap(vec[i], vec[j]);
                i++;
              }
            }
            doSwap(vec[(i)], vec[last]); // pivor shout be at i 
            return i; // returns position of sorted position

          }

        void quickSort(int first, int last, std::vector<int> &vec){
             if (first < last) { // true if there are still unsorted subvectors

               int sortedPivot = partition(first,last, vec);

               quickSort(first, (sortedPivot-1), vec); // for sub vec 1 (less)
               quickSort((sortedPivot + 1), last, vec); //for sub vec 2 (greater)

             }

          
        }
        void doSort(std::vector<int> &vec) {
          int size = vec.size();

          quickSort(0, size, vec);
        }
};
#endif
