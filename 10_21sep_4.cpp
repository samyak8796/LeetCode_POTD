class Solution {
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    vector<int> arr(nums1.size() + nums2.size(), 0);
    int i = 0, j = 0, k = 0;
    while (i < nums1.size() && j < nums2.size()) {
      if (nums1[i] < nums2[j]) {
        arr[k++] = nums1[i++];
      } else {
        arr[k++] = nums2[j++];
      }
    }
    while (i < nums1.size()) {
      arr[k++] = nums1[i++];
    }
    while (j < nums2.size()) {
      arr[k++] = nums2[j++];
    }

	int p = nums1.size() + nums2.size();
    if (p & 1) {
      return (double)(arr[p / 2]);
    }
    return (double)(arr[(p - 1) / 2] + arr[p / 2]) / 2;
  }
};
