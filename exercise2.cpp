#include <iostream>
using namespace std;

static bool test(int numbers[], int arr_length)
        {
         for (int i = 0; i < arr_length - 1; i++)
            {
                if (numbers[i + 1] == numbers[i] && numbers[i] == 15) return true;
            }
            return false;
          }   
          
int main() 
 {  
  int nums1[] = {5, 5, 1, 15, 15};
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = {15, 2, 3, 4, 15};
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = {3, 3, 15, 15, 5, 5};
  arr_length = sizeof(nums3) / sizeof(nums3[0]);
  cout << test(nums3, arr_length) << endl;
  int nums4[] = {1, 5, 15, 7, 8, 15};
  arr_length = sizeof(nums4) / sizeof(nums4[0]);
  cout << test(nums4, arr_length) << endl;  
  return 0;    
}
