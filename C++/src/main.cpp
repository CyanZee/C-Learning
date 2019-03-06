#include <iostream>
#include <stdio.h>
#include "KCFTrackerEX.h"

using namespace std;

int main()
{
	cout << "Hello World!" << endl;
	Mat image;
	char imageName[125];
	KCFTrackerEx oKCFTrackerEx;

	for(int i = 0; i < 2; i++)
	{
		snprintf(imageName, 125, "%d.jpg",i);
		cout << "imageName = " << imageName << endl;
		image = imread(imageName);
		oKCFTrackerEx.KCFTrackerUpdate(image);
		if(oKCFTrackerEx.iKCFTrackerCheck(1183,444,220,393))
		{
			cout << "AntionChan:This is old target, drop it!" << endl;
			//continue;
		}
	}
	cout << "exit!" << endl;
	//imshow("test", image);
	cv::waitKey(0);
	return 0;
}

