#include<iostream>
#include"range.hpp"

int main(int argc, char** argv)
{
	using namespace std;
	using namespace my;

	try 
	{
		int arr[] = { 1, 3, 5, 7, 9 };
		for (auto i : range<int>(std::size(arr)))
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	catch (const std::exception& exc)
	{
		cout << exc.what() << endl;
	}

	system("pause");
	return 0;
}