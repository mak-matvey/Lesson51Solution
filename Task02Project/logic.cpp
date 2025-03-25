int get_fibo_number(int number)
{

	if (number < 0)
	{
		return -1;
	}

	if (number <= 3)
	{
		return 1;
	}

	return get_fibo_number(number - 1) + get_fibo_number(number - 2);
}