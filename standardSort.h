/**
 * file:        standardSort.h
 * author:      Liam Fitting
 * date:        2/20/24
 * description: parent class forother implemented sorts
 */

#include "sort.h"
#include<algorithm>

class StandardSort : public Sort{

    public:
        StandardSort(){
            name = "std::sort";
        }

        void doSort(std::vector<int> &vec) {
            std::sort(vec.begin(), vec.end());
        }

};
