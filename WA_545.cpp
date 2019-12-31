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
		auto position_speed = std::list<std::pair<int, int>>();

		for (int i = 0; i < n_veh; ++i)
		{
			int t_at_x0, v;
			std::cin >> t_at_x0;
			std::cin >> v;

			int x_at_t0 = -t_at_x0 * v;

			if (x_at_t0 <= 0)
			{
				position_speed.push_back(std::make_pair(x_at_t0, v));
			}
		}

		position_speed.sort(
			[](std::pair<int, int> a, std::pair<int, int> b) { return a.second > b.second; });

		auto currentCar = std::find_if(position_speed.begin(), position_speed.end(), [](std::pair<int, int> pair)
		{
			return pair.first == 0;
		});

		auto fasterCarAtCurrentPosition = [currentCar](std::pair<int, int> pair)
		{
			return pair.first >= (*currentCar).first
				&& pair.second > (*currentCar).second;
		};

		for (int t = 1; ; ++t)
		{
			for (auto& pair : position_speed)
			{
				pair.first += pair.second;
			}

			auto fasterCar = std::find_if(position_speed.begin(), position_speed.end(), fasterCarAtCurrentPosition);

			if (fasterCar != position_speed.end())
			{
				currentCar = fasterCar;
			}

			if ((*currentCar).first > long_trayecto)
			{
				std::cout << t - 1 << std::endl;
				break;
			}
			else if ((*currentCar).first == long_trayecto)
			{
				std::cout << t << std::endl;
				break;
			}

			// In case of needing optimizations:
			//position_speed.remove_if([currentCar, long_trayecto](std::pair<int, int> pair)
			//{
			//	return (long_trayecto - (*currentCar).first) / (*currentCar).second <
			//		(long_trayecto - pair.first) / pair.second;
			//	//return pair.first < (*currentCar).first && pair.second < (*currentCar).second;
			//});
		}
	}
}
