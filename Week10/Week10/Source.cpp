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
	int num_data = 3;
	const float study_time_data[num_data] = { 0, 1, 2 };
	const float score_data[num_data] = { 0, 2, 4 };

	LinearHypothesis lh;

	for (int i = 0; i < num_data; i++)
	{
		const float y_output = lh.getY(study_time_data[i]);
		const float y_target = score_data[i];
		const float error = y_output - y_target;

		const float sqr_error = error * error; //always 0 or positive
		std::cout <<  << std::endl;
	}
	return 0;
}