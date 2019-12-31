#include <iostream>

#include <string>   // string(str, i, length), stoi(str), to_string(num), getline(cin, str)
#include <algorithm> // (see below) find, min, max, reverse, rotate...
#include <vector>
#include <list>

int main()
{
	int long_trayecto;
	while (std::cin >> long_trayecto)
	{
		int n_veh;
		std::cin >> n_veh;
		auto t_a_x0__speed = std::list<std::pair<int, int>>();

		for (int i = 0; i < n_veh; ++i)
		{
			int t_at_x0, v;
			std::cin >> t_at_x0;
			std::cin >> v;

			if (t_at_x0 >= 0)
			{
				t_a_x0__speed.push_back(std::make_pair(t_at_x0, v));
			}
		}

		t_a_x0__speed.sort(
			[](std::pair<int, int> a, std::pair<int, int> b) { return a.second > b.second; });

		auto calculate_t = [long_trayecto](std::pair<int, int> pair)
		{
			return pair.first + long_trayecto / pair.second;
		};

		t_a_x0__speed.sort([calculate_t](
			std::pair<int, int> a, std::pair<int, int> b)
		{
			return calculate_t(a) < calculate_t(b);
		});

		std::cout << calculate_t(*(t_a_x0__speed.begin())) << std::endl;
	}
}
