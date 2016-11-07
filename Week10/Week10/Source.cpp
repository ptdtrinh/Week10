#include <iostream>

class LinearHypothesis
{
public:
	//linear hypothesis: y = a * x + b
	float a_ = 0.0f;
	float b_ = 0.0f;

	float getY(const float& x)
	{
		const float y = a_ * x + b_;
		return y;
	}
};

const int num_data = 3;

int main()
{
	const float study_time_data[num_data] = { 0, 1, 2 };
	const float score_data[num_data] = { 0, 2, 4 };

	LinearHypothesis lh;

	for (int tr = 0; tr < 100; tr++)
	{
		for (int i = 0; i < num_data; i++)
		{
			float x_input = study_time_data[i];
			float y_target = score_data[i];
			const float y_output = lh.getY(x_input);
			const float error = y_output - y_target;

			const float sqr_error = 0.5 * error * error; // always 0 or positive

			const float dse_over_da = error * x_input;
			const float dse_over_db = error;

			const float lr = 0.01;
			lh.a_ -= dse_over_da*lr;
			lh.b_ -= dse_over_db;

			std::cout << "x_input="<<x_input[i] <<"y_target=" <<y_target[i] <<" y_output" <<y_output <<"square_error" <<sqr_error << std::endl;
		}
	}

	std::cout << "From trained hypothesis " << lh.getY(2.5) << std::endl;
	return 0;
}