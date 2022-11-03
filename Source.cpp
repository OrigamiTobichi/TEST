#include"Header.h"

bool isEven(int num) {
	return num % 2 == 0;
}
bool isOdd(int num) {
	return num % 2 != 0;
}
bool isSquare(int num) {
	for (int i = 1; i <= num; i++) {
		if (i * i == num)
			return true;
	}
	return false;
}
bool isPrime(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i < sqrt(num); i++) {
		if (num % i == 0)return false;
	}
	return true;
}
bool isPerfect(int num) {
	int sum = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0)
			sum += i;
	}
	return sum == num;
}
bool isDivior(int num, int div) {
	return num % div == 0;
}
void inputArray(Mang& m) {
	cout << "Nhap so phan tu:";
	cin >> m.n;
	for (int i= 0; i < m.n; i++) {
		cout << "a[" << i << "]=";
		cin >> m.a[i];
	}
}
int sumEven(Mang m) {
	int sum = 0;
	for (int i = 0; i < m.n; i++) {
		if (isEven(m.a[i])) {
			sum += m.a[i];
		}
	}
	return sum;
}
int countEven(Mang m) {
	int count = 0;
	for (int i = 0; i < m.n; i++) {
		if (isEven(m.a[i])){
			count++;
		}
	}
	return count;
}
int sumOdd(Mang m) {
	int sum = 0;
	for (int i = 0; i < m.n; i++) {
		if (isOdd(m.a[i])) {
			sum += m.a[i];
		}
	}
	return sum;
}
int countOdd(Mang m) {
	int count = 0;
	for (int i = 0; i < m.n; i++) {
		if (isOdd(m.a[i])) {
			count++;
		}
	}
	return count;
}
int sumSquare(Mang m) {
	int sum = 0;
	for (int i = 0; i < m.n; i++) {
		if (isSquare(m.a[i])==true) {
			sum += m.a[i];
		}
	}
	return sum;
}
int countSquare(Mang m) {
	int count = 0;
	for (int i = 0; i < m.n; i++) {
		if (isSquare(m.a[i])==true) {
			count++;
		}
	}
	return count;
}
int sumPrime(Mang m) {
	int sum = 0;
	for (int i = 0; i < m.n; i++) {
		if (isPrime(m.a[i])) {
			sum += m.a[i];
		}
	}
	return sum;
}
int countPrime(Mang m) {
	int count = 0;
	for (int i = 0; i < m.n; i++) {
		if (isPrime(m.a[i])) {
			count++;
		}
	}
	return count;
}
int sumPerfect(Mang m) {
	int sum = 0;
	for (int i = 0; i < m.n; i++) {
		if (isPerfect(m.a[i])) {
			sum += m.a[i];
		}
	}
	return sum;
}
int countPerfect(Mang m) {
	int count = 0;
	for (int i = 0; i < m.n; i++) {
		if (isPerfect(m.a[i])) {
			count++;
		}
	}
	return count;
}
int sumDivior(Mang m) {
	int sum = 0;
	for (int i = 1; i <= m.n; i++) {
		if (isDivior(m.a[i],i)) {
			sum += m.a[i];
		}
	}
	return sum;
}
int countDivior(Mang m) {
	int count = 0;
	for (int i = 1; i <= m.n; i++) {
		if (isDivior(m.a[i],i)) {
			count++;
		}
	}
	return count;
}
void outputArray(Mang m) {
	for (int i = 0; i < m.n; i++) {
		cout << m.a[i] << " ";
	}
}