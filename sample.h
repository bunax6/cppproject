class sample
{
	public:
	sample();
	sample(int);
	sample(const sample&);
	sample& operator = (const sample&);
	void show();
	private:
	int num;
};
