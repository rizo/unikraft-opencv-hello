#include <cstdio>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

int main(int argc, char *argv[])
{
	printf("hello opencv %s\n", cv::getVersionString().c_str());

	cv::Mat m = cv::Mat::ones(3, 3, CV_32F);
	cv::Scalar total = cv::sum(m);
	printf("Sum: %.1f\n", total[0]);

	cv::Mat blurred;
	cv::GaussianBlur(m, blurred, cv::Size(3, 3), 0);
	cv::Scalar blurredTotal = cv::sum(blurred);
	printf("Blurred sum: %.1f\n", blurredTotal[0]);

	return 0;
}
