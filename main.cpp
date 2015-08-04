#include "bubble.h"
#include "quick.h"
#include "radix.h"
#include <iostream>

using namespace std;

void analyze_sorting(Sort *sortObject);

int main() {
  Bubble *bubble_sort = new Bubble();
  Quick *quick_sort = new Quick();
  Radix *radix_sort = new Radix();

  cout << "------- Bubble Sort -----------" << endl;
  analyze_sorting(bubble_sort);

  cout << "------- Quick Sort -----------" << endl;
  analyze_sorting(quick_sort);

  cout << "------- Radix Sort -----------" << endl;
  analyze_sorting(radix_sort);
}

void analyze_sorting(Sort *sortObject) {
  double min = 1.0, max = 0.0, total = 0.0;
  int n = 0, increment = 10;
  for(int i = 0; i < 20; i++) {
    for(int j = 0; j < 50; j++) {
      sortObject->generateRandomList(n);
      double sorting_time = sortObject->sort();
      min = sorting_time < min ? sorting_time : min;
      max = sorting_time > max ? sorting_time : max;
      total += sorting_time;

      cout.precision(7);
      n += increment;
      sortObject->random_list->clear();
    }
    cout << "n:\t" << n << n;
    cout << "\tmin:\t" << fixed << min;
    cout << "\tmax:\t" << fixed << max;
    cout << "\tavg:\t" << fixed << (total / 50) << endl;
    min = 10.0, max = 0.0, total = 0.0;
  }

}
