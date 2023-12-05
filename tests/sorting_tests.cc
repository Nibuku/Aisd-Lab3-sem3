#include <gtest/gtest.h>

#include <sorts/sorts.h>


TEST(sorts, insertionSort) {
	vector<int> v = { 6,5,9,8,1,0,2,4,3,7 };
	vector<int> v_sorted = { 0,1,2,3,4,5,6,7,8,9 };
	stats statistic = insertion_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	//for (int i = 0; i < v.size(); ++i)
		//cout << v[i];
	//cout << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, insertionSortNegative) {
	vector<int> v = { -12, 7, 4, 0,-24, -10, 0 };
	vector<int> v_sorted = { -24,-12,-10, 0, 0, 4, 7 };
	stats statistic = insertion_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, insertionSortIdenticalNumbers) {
	vector<int> v = { 1,1,1,1,1,1,1,1,1,1,1 };
	vector<int> v_sorted = { 1,1,1,1,1,1,1,1,1,1,1 };
	stats statistic = insertion_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, coctailSort) {
	vector<int> v = { 6,5,9,8,1,0,2,4,3,7 };
	vector<int> v_sorted = { 0,1,2,3,4,5,6,7,8,9 };
	stats statistic = coctail_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, coctailSortNegative) {
	vector<int> v = { -12, 7, 4, 0,-24, -10, 0 };
	vector<int> v_sorted = { -24,-12,-10, 0, 0, 4, 7 };
	stats statistic = coctail_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, coctailSortIdenticalNumbers) {
	vector<int> v = { 1,1,1,1,1,1,1,1,1,1,1 };
	vector<int> v_sorted = { 1,1,1,1,1,1,1,1,1,1,1 };
	stats statistic = coctail_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, comblSort) {
	vector<int> v = { 6,5,9,8,1,0,2,4,3,7 };
	vector<int> v_sorted = { 0,1,2,3,4,5,6,7,8,9 };
	stats statistic = comb_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, combSortNegative) {
	vector<int> v = { -12, 7, 4, 0,-24, -10, 0 };
	vector<int> v_sorted = { -24,-12,-10, 0, 0, 4, 7 };
	stats statistic = comb_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sorts, combSortIdenticalNumbers) {
	vector<int> v = { 1,1,1,1,1,1,1,1,1,1,1 };
	vector<int> v_sorted = { 1,1,1,1,1,1,1,1,1,1,1 };
	stats statistic = comb_sort(v);
	cout << "comparison_count:" << statistic.comparison_count << endl;
	cout << "copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(vectors, randomVector) {
	srand(42);
	vector<int> v = random_vector(20, 40, 100);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i]<<" ";
	cout << endl;
	EXPECT_TRUE(20 == v.size());
}

TEST(vectors, normalVector) {
	vector<int> v = normal_vector(20);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	EXPECT_TRUE(20 == v.size());
}

TEST(vectors, reverseVector) {
	vector<int> v = reverse_vector(20);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	EXPECT_TRUE(20 == v.size());
}

TEST(sortsIterator, InsertionSortWithIterators) {
	vector<int> v = reverse_vector(100);
	vector<int> v_sorted = normal_vector(100);
	stats statistic = insertion_sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "Comparison_count:" << statistic.comparison_count << " copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sortsIterator, CoctailSortWithIterators) {
	vector<int> v = reverse_vector(100);
	vector<int> v_sorted = normal_vector(100);
	stats statistic = coctail_sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "Comparison_count:" << statistic.comparison_count << " copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}

TEST(sortsIterator, CombSortWithIterators) {
	vector<int> v = reverse_vector(100);
	vector<int> v_sorted = normal_vector(100);
	stats statistic = comb_sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << "Comparison_count:" << statistic.comparison_count << " copy_count:" << statistic.copy_count << endl;
	EXPECT_TRUE(v_sorted == v);
}
/*
TEST(vectors, randomSize1000) {
	srand(42);
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(1000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 1000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;

}

TEST(vectors, randomSize2000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(2000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 2000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize3000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(3000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 3000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize4000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(4000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 4000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize5000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(5000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 5000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize6000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(6000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 6000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize7000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(7000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 7000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize8000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(8000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 8000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize9000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(9000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 9000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize10000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(10000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 10000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize25000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(25000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 25000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize50000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(50000, 0, 1000);
		stats counter = comb_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 50000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}

TEST(vectors, randomSize100000) {
	size_t sum_comparison = 0, sum_copy = 0;
	for (size_t i = 0; i < 100; ++i) {
		vector<int> v = random_vector(100000, 0, 1000);
		stats counter = coctail_sort(v);
		sum_comparison += counter.comparison_count;
		sum_copy += counter.copy_count;
	}
	cout << "size: " << 100000 << endl;
	cout << "Average comparison quantity: " << sum_comparison / 100 << endl;
	cout << "Average copy quantity: " << sum_copy / 100 << endl;
}*/

