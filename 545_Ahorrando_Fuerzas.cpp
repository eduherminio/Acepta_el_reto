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
		auto time_at_x0_and_speed = std::list<std::pair<int, int>>();

		for (int i = 0; i < n_veh; ++i)
		{
			int t_at_x0, v;
			std::cin >> t_at_x0;
			std::cin >> v;

			if (t_at_x0 >= 0)
			{
				time_at_x0_and_speed.push_back(std::make_pair(t_at_x0, v));
			}
		}

		auto calculate_t = [long_trayecto](std::pair<int, int> pair)
		{
			return pair.first + long_trayecto / pair.second;
		};

		time_at_x0_and_speed.sort([calculate_t](
			std::pair<int, int> a, std::pair<int, int> b)
		{
			return calculate_t(a) < calculate_t(b);
		});

		std::cout << calculate_t(*(time_at_x0_and_speed.begin())) << std::endl;
	}
}
