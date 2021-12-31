#include "Tutoring21.h"
//2021.11.22

// sort 
// 10818�� �ּ�, �ִ� -sort �̿�
void Tutoring21::MinMaxSort1() {
	int n{};
	int a[MAX] = {};
	std::cin >> n;
	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		std::sort(a, a + n);

		std::cout << a[0] << " " << a[n - 1] << std::endl;
	}
	return;
}

/*
10818�� �ּ�, �ִ� -sort �̿�
void MinMaxSort2() {
	int n;
	std::cin >> n;
	//int a[n];
	if (n >= 1) {
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}

		std::sort(a, a + n);

		std::cout << a[0] << " " << a[n - 1] << std::endl;
	}
	return;
}
*/

// 10818�� �ּ�, �ִ� -min, max �̿�
void Tutoring21::MinMax() {
	int n{}, input{}, min_num = MAX, max_num = -MAX;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> input;
		min_num = std::min(min_num, input);
		min_num = std::max(max_num, input);
	}

	std::cout << min_num << " " << max_num;

	return;
}


// string - substr
/*
substr() : ���� ���ִ� ���
substr(n) = �ε���4���� ����
substr(a, b) = �ε��� a���� b���� ���ڵ� ����

erase() : ��������
erase(a, b) = �ε��� a���� b������ ���ڵ� ���ֹ���

clear() : ���ڿ� ������� = > length�� 0�� ��

str1 + str2 = "abc" + "dfef" = "abcdfef"

find("abcd") : "abcd"�̶�� ���ڸ� ã����.a�� �ִ� ��ġ(�ε���)�� ���
*/

// 11721�� �� ���� ���� ����ϱ� - string.substr()
//void StringSub() {
//	std::string str1{};
//	std::cin >> str1;
//	for (int i = 0; i < str1.length(); i+=10) {
//		std::cout<< str1.substr(0+i, 10+i)<<std::endl;
//		if () {
//
//		}
//	}
//	return;
//}

// 11721�� �� ���� ���� ����ϱ� - string.erase(0, 10)
void Tutoring21::StringErase() {
	std::string str1{};
	std::cin >> str1;

	while (true) {
		std::cout << str1.substr(0, 10) << std::endl;
		str1.erase(0, 10);
		if (str1.length() == 0) {
			break;
		}
	}
	return;
}

void Tutoring21::StringTutor() {
	std::string str1{};
	std::cin >> str1;

	while (true) {
		if (str1.length() == 0) {
			break;
		}
		std::cout << str1.substr(0, 10) << std::endl;
		str1.erase(0, 10);
	}
	return;
}

// stack
/*
stack<int> s; : int�� stack
s.push(n) : n�� ����
s.top() : ���ÿ��� ���� ���� �ִ°�
s.pop() : ����  ���� �ִ� ��(���� �������� ���� ��� ����)
s.empty() : ����ִ��� ����
s.size() : ������ ũ��(���� ����)
// ������ ��� ��� ����ϴ� �ݺ���
while (!s.empty()) { //������ �� ������ �ݺ�
	cout << s.top() << ' '; // ���ÿ��� ���� ���� �ִ� ��� ���
	s.pop(); // ����� ������ ����
}
*/
// 17608�� ����� - stack
void Tutoring21::StickStack() {
	int n{}, h{}, maxH{}, cntStick{};
	std::stack<int> s;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> h;
		s.push(h);
	}

	while (!s.empty()) {
		if (maxH < s.top()) {
			maxH = s.top();
			cntStick++;
		}
		s.pop(); // ����� ������ ����
	}

	std::cout << cntStick;
	return;
}

// queue
/*
front()
back()
empty()
size()
while (!q.empty()) { //������ �� ������ �ݺ�
	cout << q.front() << ' '; // ���ÿ��� ���� ���� �ִ� ��� ���
	q.pop(); // ����� ������ ����
}
*/

// 1158�� �似Ǫ��
void Tutoring21::Josephus()
{
	int N{}, K{};
	std::queue<int> q;
	std::cin >> N >> K;

	// ��� ��(N)��ŭ ��ȣ �ֱ�
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	
	std::cout << "<";

	// ��� out �� ������ �ٺ�
	while (!q.empty()) {
		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}

		// K��° ����� out
		if (q.size() == 1) {
			std::cout << q.front();
		}
		else {
			std::cout << q.front() << ", ";
		}

		q.pop();

	}
	std::cout << ">";
}

//2021.11.29

// 2161�� ī��1
void Tutoring21::Card1() {
	std::queue<int> q;
	int N{};

	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		std::cout << q.front() << " "; // ���� ���� ���
		q.pop(); // ���� ���� �ִ� ���� out
		if (q.empty()) break;
		else {
			q.push(q.front()); // �� ���� ���ڸ� ���� �ڷ� �ű��
			q.pop(); // ���� �ڷ� �ű� ���� out
		}
	}
}

// vector
/*
vector<int> v;
v.push_back; // ������ ���� �ڿ� ���� ����

v.insert(v.end() -1, 3); // ��ġ�� �����Ͽ� ���Ҹ� ����

v.pop_back(); // ������ ���� ����

sort(v.begin(), v.end()); // [start, end) ������ �ִ� ���ڸ� ������������ ����
*/

// 10817�� �� ��
void Tutoring21::ThreeNumber() {
	std::vector<int> v;

	int n{};
	for (int i = 0; i < 3; i++) {
		std::cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());
	std::cout << v[1];
}


// pair
/*
// pair<�ڷ���, �ڷ���>
pair<int, int> p1, p2;
pair<string, double> p3;

p1 = make_pair(3, 1);
p2 = make_pair(1, 2);
p1 = make_pair("test", 1.5);

cf) vector + pair
vector<pair<int, int>> v;
v.push_back(p1); // (3, 1)�� ��
v.push_back(make_pair(1, 2)); // (1, 2)�� ��)
v.push_back({1, 3}); // (1, 3)�� ��

sort(v.begin(), v.end());
(3,1), (1,2), (1,3) => (1,2), (1,3), (3,1)
*/

void Tutoring21::Coordinate()
{
	std::vector<std::pair<int, int>> v;
	int N;
	std::cin >> N;
	int x{}, y{}; // ��ǥ
	for (int i = 0; i < N; i++) {
		std::cin >> x >> y;
		v.push_back({ x, y }); // ��ǥ �Է�
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i].first << " " << v[i].second << "\n";
	}
}


// �ð��ʰ� fail
// 1764�� �躸��
void Tutoring21::DeutBoJob()
{
	// ��, ��, �躸 ��
	int N{}, M{},cntDeutBo{};
	std::cin >> N >> M;

	std::string deutstr;
	std::string bostr;
	
	std::hash<std::string> str_hash;

	std::vector<std::string> v1, v2, resV;

	for (int i = 0; i < N; i++) {
		std::cin >> deutstr;
		v1.push_back(deutstr);
	}

	for (int i = 0; i < M; i++) {
		std::cin >> bostr;
		v2.push_back(bostr);
	}

	// ��
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (str_hash(v1[i]) == str_hash(v2[j])){
				cntDeutBo++;
				resV.push_back(v1[i]);
			}
		}
	}

	// ����
	std::sort(resV.begin(), resV.end());

	// ���
	std::cout << cntDeutBo << "\n";
	for (size_t i = 0; i < resV.size(); i++) {
		std::cout << resV[i] << "\n";
	}
}