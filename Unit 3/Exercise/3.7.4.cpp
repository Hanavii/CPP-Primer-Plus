#include <iostream>
int main()
{
	using namespace std;
	
	const int second_to_minute = 60;
	const int minute_to_hour = 60;
	const int hour_to_day = 24;
	
	long long second, tmpsecond;
	cout << "Enter the number of seconds: ________\b\b\b\b\b\b\b\b";
	cin >> second;
	tmpsecond = second;
	
	long long day, hour, minute;
	minute = second / second_to_minute;
	second = second % second_to_minute;
	
	hour = minute / minute_to_hour;
	minute = minute % minute_to_hour;
	
	day = hour / hour_to_day;
	hour = hour % hour_to_day;
	
	cout << tmpsecond << " seconds = "
		 << day << " days, "
		 << hour << " hours, "
		 << minute << " minutes, "
		 << second << " seconds\n";
		 
	
	return 0;
} 
