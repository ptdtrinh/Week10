#include <iostream>

class LinearHypothesis
{
public:
	//linear hypothesis: y = a * x + b
	float a_ = 0.0f;
	float b_ = 0.0f;

	float getY(const int& x_input)
	{
		const float y = a_ * x_input + b_;
		return y;
	}
};

int main()
{
	const float study_time_data[3] = { 0, 1, 2 };
	const float score_data[3] = { 0, 2, 4 };

	return 0;
}