using namespace std;
class StackType
{
public:
	StackType();
	bool isEmpty()const;
	bool isFull() const;
	void Push(char c);
	void Pop();
	char Top();

private:
	int top;
	char item[10];
};

