#include <gtest/gtest.h>

#include <sorts/sorts.h>

TEST(sorts, insertionSort) {
	vector<int> v = { 6,5,9,8,1,0,2,4,3,7 };
	vector<int> v_sorted = { 0,1,2,3,4,5,6,7,8,9 };
	stats statistic = insertion_sort(v);
	cout << "Comparison_count:" << statistic.comparison_count << " copy_count:" << statistic.copy_count << endl;
	//for (int i = 0; i < v.size(); ++i)
		//cout << v[i];
	//cout << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, insertionSortNegative) {
	vector<int> v = { -12, 7, 4, 0,-24, -10, 0 };
	vector<int> v_sorted = { -24,-12,-10, 0, 0, 4, 7 };
	stats statistic = insertion_sort(v);
	cout << "Comparison_count:" << statistic.comparison_count << " copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, insertionSortIdenticalNumbers) {
	vector<int> v = { 1,1,1,1,1,1,1,1,1,1,1 };
	vector<int> v_sorted = { 1,1,1,1,1,1,1,1,1,1,1 };
	stats statistic = insertion_sort(v);
	cout << "Comparison_count:" << statistic.comparison_count << " copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

